/* 
 * File:   Sound_Menu.cpp
 * Author: sei
 * 
 * Created on 17. August 2014, 21:25
 */

#include "Sound_Menu.h"

Sound_Menu::Sound_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state) : Menu(encoder,u8glib,parent_state) {
    state = 0;
//
}

void Sound_Menu::input(void) {
	state = enc->getValue();

	if (enc->isReleased()) {
		switch(state)
		{
		case 0:
			*p_state = STATE_CLOCK;
			break;
		case 1:
			*p_state = STATE_CLOCK;
			break;
		case 2:
			*p_state = STATE_CLOCK;
			break;
		case 3:
			*p_state = STATE_CLOCK;
			break;
		}
	}
}

void Sound_Menu::draw(void) {
	int y = 10;
	int x = 20;

	u8g->setFont(u8g_font_courR10);
	u8g->setPrintPos(x,y);
	u8g->print("Bla");
	u8g->setPrintPos(x,y+15);
	u8g->print("Bla Bla");
	u8g->setPrintPos(x,y+30);
	u8g->print("Bla");
	u8g->setPrintPos(x,y+45);
	u8g->print("Exit");

	u8g->setFont(u8g_font_symb14);
	switch(state)
	{
	case 0:
		u8g->setPrintPos(0,y);
		break;
	case 1:
		u8g->setPrintPos(0,y+15);
		break;
	case 2:
		u8g->setPrintPos(0,y+30);
		break;
	case 3:
		u8g->setPrintPos(0,y+45);
		break;
	}
	u8g->print( (char) 174);
}
