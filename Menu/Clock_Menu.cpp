/* 
 * File:   Clock_Menu.cpp
 * Author: sei
 * 
 * Created on 15. August 2014, 19:18
 */

#include "Clock_Menu.h"
#include "Menu.h"


Clock_Menu::Clock_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state, RTC_clock *clock, Alarm *alarm) : Menu(encoder,u8glib,parent_state) {
    this->clock = clock;
    this->alarm = alarm;
}

void Clock_Menu::input(void) {
	if (enc->isReleased()) {
			  *p_state = STATE_SETUP;
			  enc->setBounds(0,3,15);
	}
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void Clock_Menu::draw(void) {
	int time_y = 47;
	int time_x = 10;

	// draw alarm time and set height of time
	if (alarm->is_set()) {
		u8g->setFont(u8g_font_fixed_v0);
		u8g->setPrintPos(27,57);
		u8g->print("ALARM AT");
		u8g->setPrintPos(77,57);
		u8g->print( time2str(alarm->get_hour(),alarm->get_minute()) );
		time_y = 40;
	} else {
	  u8g->setFont(u8g_font_fixed_v0);
	  u8g->setPrintPos(50,57);
	  //u8g->print(lux);
	  u8g->setPrintPos(90,57);
	  //u8g.print(touch->wasPressed(MPR121_MENU));
	  u8g->setPrintPos(100,57);
	  u8g->print(enc->getValue());
          //unsigned long ms = millis();
          //int phase = 3000;
          //int period = 5000;
          //u8g.print( 1024 * 2 * abs(round( ( (float) ms+phase)/period)-( ( (float) ms+phase)/ period))  );
          //u8g.print(ms);
	  time_y = 40;
	}

	// Draw Time
	u8g->setFont(u8g_font_fub30n);
	u8g->setPrintPos(time_x,time_y);
	//u8g.print(dec2str(clock.hour));
        u8g->print(dec2str(clock->get_hours()));
        
	u8g->setPrintPos(time_x+60,time_y);
	//u8g.print(dec2str(clock.minute));
        u8g->print(dec2str(clock->get_minutes()));
        
	u8g->setFont(u8g_font_fixed_v0);
	u8g->setPrintPos(time_x+106,time_y);
	//u8g.print(dec2str(clock.second));
        u8g->print(dec2str(clock->get_seconds()));

	// draw blinking colon
	if (Menu::blink) {
		u8g->setFont(u8g_font_fub30n);
		//u8g.setFont(u8g_font_courR24);
		u8g->setPrintPos(time_x+46,time_y-5);
		u8g->print(":");
	}
}
