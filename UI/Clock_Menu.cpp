/* 
 * File:   Clock_Menu.cpp
 * Author: sei
 * 
 * Created on 24. August 2014, 22:03
 */

#include "Clock_Menu.h"

Clock_Menu::Clock_Menu(Widget *parent, RTC_clock* due_clock, DS1307* ext_clock) 
    : Widget(parent) 
{
    this->due_clock = due_clock;
    this->ext_clock = ext_clock;
    hour = 0;
    minute = 0;
    second = 0;
    state = -1;
}

void Clock_Menu::claim_input() {
    Widget::claim_input();
    state = -1;   
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Clock_Menu::input(void) {

	switch(state)
	{
	case -1:
            enc->setUndersample(10);
            ext_clock->getTime();
            hour = ext_clock->hour;
            state = 0;
            break;
	case 0:
            hour += enc->getDirection();
            if (hour < 0) hour = 0;
            hour = hour % 23;
            minute = ext_clock->minute;
            break;
	case 1:
            minute += enc->getDirection();
            if (minute < 0) minute = 0;
            minute = minute % 59;
            break;
	}

	if (enc->isReleased()) {
            switch(state)
            {
            case 0:
                    state = 1;
                    enc->setUndersample(8);
                    minute = ext_clock->minute;
                    break;
            case 1:
                    ext_clock->fillByHMS(hour,minute,second);
                    ext_clock->setTime();
                    due_clock->set_time(hour,minute,second);
                    state = -1;
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
void Clock_Menu::draw(void) {
    int time_y = 45;
    int time_x = 10;

    u8g->setFont(u8g_font_fixed_v0);
    u8g->setPrintPos(10,10);
    u8g->print("SET CLOCK");

    // Draw Time
    u8g->setFont(u8g_font_fub30n);
    u8g->setPrintPos(time_x,time_y);
    u8g->print(dec2str(hour));
    u8g->setPrintPos(time_x+60,time_y);
    u8g->print(dec2str(minute));
    u8g->setFont(u8g_font_fub30n);
    u8g->setPrintPos(time_x+46,time_y-5);
    u8g->print(":");

    if (Widget::blinkfast)
        switch(state)
        {
        case 0:
            u8g->drawLine(time_x+5,time_y+1,time_x+40,time_y+1);
            break;
        case 1:
            u8g->drawLine(time_x+5+60,time_y+1,time_x+40+60,time_y+1);
            break;
        }
}
