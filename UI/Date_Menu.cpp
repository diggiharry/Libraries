/* 
 * File:   Date_Menu.cpp
 * Author: sei
 * 
 * Created on 29. August 2014, 23:39
 */

#include "Date_Menu.h"

Date_Menu::Date_Menu(Widget *parent, RTC_clock* due_clock, DS1307* ext_clock)  
    : Widget(parent)
{  
    this->due_clock = due_clock;
    this->ext_clock = ext_clock;
    
    x = 0;
    y = 5;
    
    day = 0;
    month = 0;
    year = 0;  
    
    initialize = true;

    active_item = 0;
    int i = 0;    
    daybox = new InputBox(this, "Day", 1, 31, day);
    daybox->set_pos(x+20,y+10+i*(daybox->get_height()+4)-2);
    i++;
    monthbox = new InputBox(this, "Month", 1, 12, month);
    monthbox->set_pos(x+20,y+10+i*(monthbox->get_height()+4)-2);
    i++;
    yearbox = new InputBox(this, "Year", 2014, 2999, year);
    yearbox->set_pos(x+20,y+10+i*(yearbox->get_height()+4)-2);
    i++;
    done = new MenuItem("Done", this);     
    done->set_pos(x+20,y+10+i*(done->get_height()+4)-2);
}

void Date_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10); 
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Date_Menu::input(void) {
    
    if (initialize) {
        ext_clock->getTime();
        day = ext_clock->dayOfMonth;
        month = ext_clock->month;
        year = ext_clock->year+2000; 

        daybox->set_value(day);
        monthbox->set_value(month);
        yearbox->set_value(year); 
        
        initialize = false;
    }
   
    active_item += enc->getDirection();
    if (active_item < 0) active_item = 3;
    active_item %= 4;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 0:
                daybox->claim_input();
                break;
            case 1:
                monthbox->claim_input();
                break;
            case 2:
                yearbox->claim_input();
                break;
            case 3:
                active_item = 0;
                initialize = true;
                day = daybox->get_value();
                month = monthbox->get_value();
                year = yearbox->get_value(); 
                ext_clock->fillByYMD(year, month, day);
                ext_clock->setTime();
                due_clock->set_date(day, month, year);
                this->release_input(true);
                break;            
        }
    }
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void Date_Menu::draw(void) {
    
    daybox->draw();
    monthbox->draw();
    yearbox->draw();
    done->draw();

    u8g->setFont(u8g_font_cu12_67_75);
        switch(active_item) {
            case 0:
                u8g->setPrintPos(5,daybox->get_y()+3);            
                break;
            case 1:
                u8g->setPrintPos(5,monthbox->get_y()+3);            
                break;
            case 2:
                u8g->setPrintPos(5,yearbox->get_y()+3);            
                break;
            case 3:
                u8g->setPrintPos(5,done->get_y()+3);            
                break;            
        }
    u8g->print( (char) 104 );  
}

