/* 
 * File:   LightRGB_Menu.cpp
 * Author: sei
 * 
 * Created on 16. August 2014, 19:10
 */

#include "LightRGB_Menu.h"
#include "Menu.h"

LightRGB_Menu::LightRGB_Menu(Encoder *encoder,U8GLIB_LM6059_2X *u8glib,int *parent_state, Fader *fader) 
    : Menu(encoder,u8glib,parent_state) 
{
    this->fader = fader;
    state = -1;
    mode = SINGLE_COLOR;
    sub_state = 0;
    
    red = 50;
    green = 50;
    blue = 50;
    
    period = 500;
    phase1 = 100;
    phase2 = 200;
    
    make_input = false;
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void LightRGB_Menu::input(void) {
   
   
	switch(state)
	{
	case -1:
		enc->setBounds(1,4,25);
		state = SELECT_MODE;
                mode = SINGLE_COLOR;
                //fader->fade_out();
                //int colors[12] = {red,green,blue, red,green,blue, red,green,blue, red,green,blue};
                //fader->start_fade_to_color(colors,100);
		break;
	case SELECT_MODE:
		mode = enc->getValue();
		break;
	case SINGLE_COLOR:
                if (!make_input) sub_state = enc->getValue();
                else {
                    switch (sub_state) {
                        case 0:
                            red = enc->getValue();
                            break;
                        case 1:
                            green = enc->getValue();
                            break;
                        case 2:
                            blue = enc->getValue();
                            break;
                    }  
                    fader->set_all( (int) 1023 * (float) red / 100, (int) 1023 * (float) green / 100, (int) 1023 * (float) blue / 100);
                }                
                break;
	case RAINBOW:
               if (!make_input) sub_state = enc->getValue();
                else {
                    switch (sub_state) {
                        case 0:
                            period = enc->getValue();
                            break;
                        case 1:
                            phase1 = enc->getValue();
                            break;
                        case 2:
                            phase2 = enc->getValue();
                            break;
                    }  
                }                
		break;
//        case SUNRISE:
//		mode = enc->getValue();
//		break;
	}
    

	if (enc->isReleased()) {
		switch(state)
		{
                    case SELECT_MODE:
                        state = mode;
                        switch (mode) {
                            case SINGLE_COLOR:
                                enc->setBounds(0,3,15);
                                sub_state = 0;
                                make_input = false;
                                fader->set_all( (int) 1023 * (float) red / 100, (int) 1023 * (float) green / 100, (int) 1023 * (float) blue / 100);
                                break;
                            case RAINBOW:
                                enc->setBounds(0,3,15);
                                sub_state = 0;
                                make_input = false;
                                break;
                            case SUNRISE:
                                state = -1;
                                sub_state = 0;
                                mode = SUNRISE;
                                fader->start_sunrise(20000);
                                *p_state = STATE_CLOCK;    
                            case COLORWAVE:
                                state = -1;
                                sub_state = 0;
                                mode = COLORWAVE;
                                fader->start_colorwave(15000);
                                *p_state = STATE_CLOCK;                                  
                        }
                        break;
                    case SINGLE_COLOR:
                        if (sub_state == 0 || sub_state == 1 || sub_state == 2) {
                        //if (sub_state == 0) {
                            if (!make_input) {
                                make_input = true;
                                enc->setBounds(0,100,5); 
                                switch (sub_state) {
                                    case 0:
                                        enc->setValue(red);
                                        break;
                                    case 1:
                                        enc->setValue(green);
                                        break;
                                    case 2:
                                        enc->setValue(blue); 
                                        break;
                                }
                            } else {
                                make_input = false;
                                enc->setBounds(0,3,15); 
                                enc->setValue(sub_state);
                            }       
                        } else {
                            //enc->setBounds(1,2,25);
                            state = -1;
                            sub_state = 0;
                            mode = SINGLE_COLOR;
                            *p_state = STATE_CLOCK;
                        }
			break;
                    case RAINBOW:
                      if (sub_state == 0 || sub_state == 1 || sub_state == 2) {
                        //if (sub_state == 0) {
                            if (!make_input) {
                                make_input = true;
                                switch (sub_state) {
                                    case 0:
                                        enc->setBounds(20,1000,1); 
                                        enc->setValue(period);
                                        break;
                                    case 1:
                                        enc->setBounds(0,300,1);                                      
                                        enc->setValue(phase1);
                                        break;
                                    case 2:
                                        enc->setBounds(0,300,1); 
                                        enc->setValue(phase2); 
                                        break;
                                }
                            } else {
                                make_input = false;
                                enc->setBounds(0,3,15); 
                                enc->setValue(sub_state);
                            }       
                        } else {
                            //enc->setBounds(1,2,25);
                            state = -1;
                            sub_state = 0;
                            mode = RAINBOW;
                            fader->start_rainbow(period*10,phase1*10,phase2*10);
                            *p_state = STATE_CLOCK;
                        }
			break;
                                            
		}
	}

}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void LightRGB_Menu::draw(void) {
    int y = 10;
    int x = 20;


    switch(state)
    {
        case SELECT_MODE:

            u8g->setFont(u8g_font_fixed_v0);
            u8g->setPrintPos(10,10);
            u8g->print("SET LIGHT MODE");

            u8g->setPrintPos(10,30);

            switch(mode)
            {
                case SINGLE_COLOR:
                    u8g->print("Single Color");
                    break;
                case RAINBOW:
                    u8g->print("Rainbow Mode");
                    break;
                case SUNRISE:
                    u8g->print("Sunrise");
                    break;                    
                case COLORWAVE:
                    u8g->print("Colorwave");
                    break;                    
            }

            if (Menu::blinkfast) {
                    u8g->drawLine(15,35,70,35);
            }
            break;
            
        case SINGLE_COLOR:
            
            u8g->setFont(u8g_font_courR10);
            u8g->setPrintPos(x,y);
            u8g->print("Red");
            u8g->setPrintPos(x,y+15);
            u8g->print("Green");
            u8g->setPrintPos(x,y+30);
            u8g->print("Blue");
            u8g->setPrintPos(x,y+45);
            u8g->print("Done");
            
            u8g->setPrintPos(x+50,y);
            u8g->print(red);
            u8g->setPrintPos(x+50,y+15);
            u8g->print(green);
            u8g->setPrintPos(x+50,y+30);
            u8g->print(blue);
               
            if (make_input) x += 50;
            
             switch(sub_state)
            {
                case 0:
                    u8g->drawLine(x,y+2,x+20,y+2);
                    break;
                case 1:
                    u8g->drawLine(x,y+2+15,x+20,y+2+15);
                    break;
                case 2:
                    u8g->drawLine(x,y+2+30,x+20,y+2+30);
                    break;
                case 3:
                    u8g->drawLine(x,y+2+45,x+20,y+2+45);
                    break;                  
            }            

            break;
            
        case RAINBOW:
            x -= 15;
            
            u8g->setFont(u8g_font_courR10);
            u8g->setPrintPos(x,y);
            u8g->print("Period");
            u8g->setPrintPos(x,y+15);
            u8g->print("Phase1");
            u8g->setPrintPos(x,y+30);
            u8g->print("Phase2");
            u8g->setPrintPos(x,y+45);
            u8g->print("Done");
            
            u8g->setPrintPos(x+60,y);
            u8g->print(period*10);
            u8g->setPrintPos(x+60,y+15);
            u8g->print(phase1*10);
            u8g->setPrintPos(x+60,y+30);
            u8g->print(phase2*10);
                     
            
            if (make_input) x += 50;
            
             switch(sub_state)
            {
                case 0:
                    u8g->drawLine(x,y+2,x+20,y+2);
                    break;
                case 1:
                    u8g->drawLine(x,y+2+15,x+20,y+2+15);
                    break;
                case 2:
                    u8g->drawLine(x,y+2+30,x+20,y+2+30);
                    break;
                case 3:
                    u8g->drawLine(x,y+2+45,x+20,y+2+45);
                    break;                  
            }            
           
            break;
    }
}
