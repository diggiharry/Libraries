/* 
 * File:   Dawn_Menu.cpp
 * Author: sei
 * 
 * Created on 30. August 2014, 00:04
 */

#include "Dawn_Menu.h"

Dawn_Menu::Dawn_Menu(Widget *parent, Alarm *alarm) 
    : Widget(parent) 
{    
    this->alarm = alarm;
    x = 0;
    y = 5;

    duration = DAWN_DURATION;      
     
    active_item = 0;
    int i = 0;    
    durbox = new InputBox(this, "Dawn Duration", 10, 60, duration);
    durbox->set_pos(x+20,y+10+i*(durbox->get_height()+4)-2);
    i++;
    done = new MenuItem("Done", this);     
    done->set_pos(x+20,y+10+i*(done->get_height()+4)-2);
}

void Dawn_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(15);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Dawn_Menu::input(void) {
   
    active_item += enc->getDirection();
    if (active_item < 0) active_item = 1;
    active_item %= 2;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 0:
                durbox->claim_input();
                break;
            case 1:
                active_item = 0;
                alarm->set_dawn_duration(duration);
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
void Dawn_Menu::draw(void) {
    
    durbox->draw();
    done->draw();

    u8g->setFont(u8g_font_cu12_67_75);
        switch(active_item) {
            case 0:
                u8g->setPrintPos(5,durbox->get_y()+3);            
                break;
            case 1:
                u8g->setPrintPos(5,done->get_y()+3);            
                break;            
        }
    u8g->print( (char) 104 );

    duration = durbox->get_value();
}


