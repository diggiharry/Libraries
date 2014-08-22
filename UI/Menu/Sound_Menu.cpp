/* 
 * File:   Sound_Menu.cpp
 * Author: sei
 * 
 * Created on 17. August 2014, 21:25
 */

#include "Sound_Menu.h"

Sound_Menu::Sound_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state) : Menu(encoder,u8glib,parent_state) {
    state = -1;
    make_input = false;
}

void Sound_Menu::input(void) {
    if (!make_input) {
        if (state == -1) {
            enc->setBounds(0,2,20);
            enc->setValue(0);
            state = 0;
        }
        state = enc->getValue(); 
    } else {
        switch(state) {
             case SOUND_VOLUME:
                 switch(enc->getValue()) {
                    case 0:
                        music.volume(UP,10);
                        enc->setValue(1);
                        break;
                    case 2:
                        music.volume(DOWN,10);
                        enc->setValue(1);
                        break;
                } 
                break;
            case SOUND_TRACK:
                switch(enc->getValue()) {
                    case 0:
                        music.next();
                        enc->setValue(1);
                        break;
                    case 2:
                        music.prev();
                        enc->setValue(1);
                        break;
                }                
                break;
        }
    }

    if (enc->isReleased()) {
            switch(state)
            {                    
                case SOUND_VOLUME:
                    if (make_input) {
                        enc->setBounds(0,2,15);
                        enc->setValue(state);  
                        music.pause();
                        music.prev();
                        music.next();
                        make_input = false;
                    } else {
                        enc->setBounds(0,2,15);
                        enc->setValue(1);  
                        music.play();
                        make_input = true;
                    }
                    break;                        
                case SOUND_TRACK:
                    if (make_input) {
                        enc->setBounds(0,2,15);
                        enc->setValue(state);
                        music.pause();
                        music.prev();
                        music.next();                      
                        make_input = false;
                    } else {
                        enc->setBounds(0,2,15);
                        enc->setValue(1);  
                        music.play();
                        make_input = true;
                    }
                    break;                        
                case 2:
                    music.pause();
                    music.prev();
                    music.next();                      
                    *p_state = STATE_CLOCK;
                    state = -1;
                    break;
            }
    }
}

void Sound_Menu::draw(void) {
	int x = 10;
        int y = 23;
        
        u8g->setFont(u8g_font_fixed_v0);
        u8g->setPrintPos(10,10);
        u8g->print("SOUND SETTINGS");
        
        u8g->setFont(u8g_font_8x13);
	u8g->setPrintPos(x,y);
	u8g->print("Change Volume");
	u8g->setPrintPos(x,y+15);
	u8g->print("Change Track");
	u8g->setPrintPos(x,y+30);
	u8g->print("Exit");

	if (Menu::blinkfast)
	switch(state)
	{
	case 0:
		u8g->drawLine(x+5,y+2,x+30,y+2);
		break;
	case 1:
		u8g->drawLine(x+5,y+15+2,x+30,y+15+2);
		break;
	case 2:
		u8g->drawLine(x+5,y+30+2,x+30,y+30+2);
		break;
	}
}
