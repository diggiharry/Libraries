/* 
 * File:   Alarm_Menu.cpp
 * Author: sei
 * 
 * Created on 15. August 2014, 19:18
 */

#include "Alarm_Menu.h"

Alarm_Menu::Alarm_Menu(Widget *parent,Alarm *alarm) : Widget(parent) {
    this->alarm = alarm;
    alarm_state = -1;   
}

void Alarm_Menu::claim_input() {
    Widget::claim_input();
    alarm_state = -1;   
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Alarm_Menu::input(void) {

	switch(alarm_state)
	{
	case -1:
            enc->setUndersample(10);
            hour = alarm->get_hour();
            alarm_state = 0;
            break;
	case 0:
            hour += enc->getDirection();
            if (hour < 0) hour = 23;
            hour = hour % 23;
            alarm->set_hour(hour);
            break;
	case 1:
            minute += enc->getDirection();
            if (minute < 0) minute = 59;
            minute = minute % 59;
            alarm->set_minute(minute);
            break;
	case 2:
            set = enc->getDirection() % 2;
            if (set == -1) alarm->set(false);
            if (set == 1) alarm->set(true);
            break;
	}

	if (enc->isReleased()) {
            switch(alarm_state)
            {
            case 0:
                    alarm_state = 1;
                    enc->setUndersample(8);
                    minute = alarm->get_minute();
                    break;
            case 1:
                    alarm_state = 2;
                    enc->setUndersample(20);
                    set = alarm->is_set();
                    break;
            case 2:
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
void Alarm_Menu::draw(void) {
	int time_y = 45;
	int time_x = 10;

	u8g->setFont(u8g_font_fixed_v0);
	u8g->setPrintPos(10,10);
	u8g->print("SET ALARM TIME");

	// draw alarm state
	if (alarm->is_set()) {
		u8g->setFont(u8g_font_fixed_v0);
		u8g->setPrintPos(10,57);
		u8g->print("Alarm is set");
	} else {
		u8g->setFont(u8g_font_fixed_v0);
		u8g->setPrintPos(10,57);
		u8g->print("Alarm is not set");
	}

	// Draw Time
	u8g->setFont(u8g_font_fub30n);
	u8g->setPrintPos(time_x,time_y);
	u8g->print(dec2str(alarm->get_hour()));

	u8g->setPrintPos(time_x+60,time_y);
	u8g->print(dec2str(alarm->get_minute()));

	u8g->setFont(u8g_font_fub30n);
	u8g->setPrintPos(time_x+46,time_y-5);
	u8g->print(":");

	if (Widget::blinkfast)
	switch(alarm_state)
	{
	case 0:
		u8g->drawLine(time_x+5,time_y+1,time_x+40,time_y+1);
		break;
	case 1:
		u8g->drawLine(time_x+5+60,time_y+1,time_x+40+60,time_y+1);
		break;
	case 2:
		if (!alarm->is_set()) u8g->drawLine(10,58,98,58);
		else u8g->drawLine(10,58,75,58);
		break;
	}
}
