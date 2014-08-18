/* 
 * File:   SetClock_Menu.cpp
 * Author: sei
 * 
 * Created on 17. August 2014, 21:25
 */

#include "SetClock_Menu.h"

SetClock_Menu::SetClock_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state, RTC_clock* due_clock, DS1307* ext_clock) : Menu(encoder,u8glib,parent_state) {
    state = -1;
    this->due_clock = due_clock;
    this->ext_clock = ext_clock;
    hour = 0;
    minute = 0;
    second = 0;
}

void SetClock_Menu::input(void) {

	switch(state)
	{
	case -1:
                ext_clock->getTime();
		enc->setBounds(0,23,10);
                hour = ext_clock->hour;
		enc->setValue(hour);
		state = 0;
		break;
	case 0:
		hour = enc->getValue();
		break;
	case 1:
		minute = enc->getValue();
		break;
	}

	if (enc->isReleased()) {
		switch(state)
		{
		case 0:
			state = 1;
			enc->setBounds(0,59,8);
                        minute = ext_clock->minute;
                        enc->setValue(minute);
			break;
		case 1:
                        ext_clock->fillByHMS(hour,minute,second);
                        ext_clock->setTime();
                        due_clock->set_time(hour,minute,second);
                        
                        *p_state = STATE_CLOCK;
      			state = -1;
			break;
		}
	}
}

void SetClock_Menu::draw(void) {
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

	if (Menu::blinkfast)
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
