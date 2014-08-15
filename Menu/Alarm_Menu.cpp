#include "Alarm_Menu.h"

Alarm_Menu::Alarm_Menu(Encoder *encoder,U8GLIB *u8glib,int *parent_state) : Menu(encoder,u8glib,parent_state) {
    alarm_state = 0;
    alarm_hour = 0;
    alarm_minute = 0;
    alarm_is_set = false;
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
		enc->setBounds(1,24,10);
		enc->setValue(alarm_hour);
		alarm_state = 0;
		break;
	case 0:
		alarm_hour = enc->getValue();
		break;
	case 1:
		alarm_minute = enc->getValue();
		break;
	case 2:
		alarm_is_set = enc->getValue();
		break;
	}

	if (enc->isReleased()) {
		switch(alarm_state)
		{
		case 0:
			alarm_state = 1;
			enc->setBounds(0,59,8);
			enc->setValue(alarm_minute);
			break;
		case 1:
			alarm_state = 2;
			enc->setBounds(0,1,20);
			enc->setValue(alarm_is_set);
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
	if (alarm_is_set) {
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
	u8g->print(dec2str(alarm_hour));

	u8g->setPrintPos(time_x+60,time_y);
	u8g->print(dec2str(alarm_minute));

	u8g->setFont(u8g_font_fub30n);
	u8g->setPrintPos(time_x+46,time_y-5);
	u8g->print(":");

	if (blinkfast)
	switch(alarm_state)
	{
	case 0:
		u8g->drawLine(time_x+5,time_y+1,time_x+40,time_y+1);
		break;
	case 1:
		u8g->drawLine(time_x+5+60,time_y+1,time_x+40+60,time_y+1);
		break;
	case 2:
		if (!alarm_is_set) u8g->drawLine(10,58,98,58);
		else u8g->drawLine(10,58,75,58);
		break;
	}
}


String Alarm_Menu::time2str(int hour,int minute) {
	String h;
	if (hour < 9) {
		h = String(hour);
		h = "0" + h;
	} else {
		h = String(hour);
	}
	String m;
	if (minute < 9) {
		m = String(minute);
		m = "0" + m;
	} else {
		m = String(minute);
	}
	return h+":"+m;
}

String Alarm_Menu::dec2str(int dec) {
	if (dec < 99) {
		String n;
		if (dec < 10) {
			n = String(dec);
			n = "0" + n;
		} else {
			n = String(dec);
		}
		return n;
	} else return String("na");
}