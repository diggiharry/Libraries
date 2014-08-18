/* 
 * File:   Alarm_Menu.cpp
 * Author: sei
 * 
 * Created on 15. August 2014, 19:18
 */

#include "Alarm_Menu.h"
#include "Menu.h"


Alarm_Menu::Alarm_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state, Alarm *alarm) : Menu(encoder,u8glib,parent_state) {
    alarm_state = -1;
    this->alarm = alarm;
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
		enc->setBounds(0,23,10);
		enc->setValue(alarm->get_hour());
		alarm_state = 0;
		break;
	case 0:
		alarm->set_hour(enc->getValue());
		break;
	case 1:
		alarm->set_minute(enc->getValue());
		break;
	case 2:
		alarm->set(enc->getValue());
		break;
	}

	if (enc->isReleased()) {
		switch(alarm_state)
		{
		case 0:
			alarm_state = 1;
			enc->setBounds(0,59,8);
			enc->setValue(alarm->get_minute());
			break;
		case 1:
			alarm_state = 2;
			enc->setBounds(0,1,20);
			enc->setValue(alarm->is_set());
			break;
		case 2:
			*p_state = STATE_CLOCK;
      			alarm_state = -1;
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

	if (Menu::blinkfast)
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
