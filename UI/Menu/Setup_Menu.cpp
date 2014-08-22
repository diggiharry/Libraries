/* 
 * File:   Setup_Menu.cpp
 * Author: sei
 * 
 * Created on 15. August 2014, 19:31
 */

#include "Setup_Menu.h"
#include "Menu.h"


Setup_Menu::Setup_Menu(Widget *parent)
    : Menu(parent) 
{
    setup_state = 0;
    for (int i = 0; i<4; i++) {
        items[i] = new MenuItem(item_labels[i],this);        
        this->add_child(items[i]);
    }
    
    
}

void Setup_Menu::input(void) {
	setup_state = enc->getValue();

	if (enc->isReleased()) {
		switch(setup_state)
		{
		case 0:
			*p_state = STATE_ALARM;
			break;
		case 1:
			*p_state = STATE_LIGHTRGB;
			break;
		case 2:
			*p_state = STATE_SETTINGS;
			break;
		case 3:
			*p_state = STATE_CLOCK;
			break;
		}
	}
}

void Setup_Menu::draw(void) {
	int y = 10;
	int x = 20;

	u8g->setFont(u8g_font_courR10);
	u8g->setPrintPos(x,y);
	u8g->print("Set Alarm");
	u8g->setPrintPos(x,y+15);
	u8g->print("Light RGB");
	u8g->setPrintPos(x,y+30);
	u8g->print("Settings");
	u8g->setPrintPos(x,y+45);
	u8g->print("Exit");

	u8g->setFont(u8g_font_symb14);
	switch(setup_state)
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
