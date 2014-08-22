/* 
 * File:   LightRGB_Menu.cpp
 * Author: sei
 * 
 * Created on 16. August 2014, 19:10
 */

#include "LightRGB_Menu.h"

LightRGB_Menu::LightRGB_Menu(Widget *parent, Fader *fader) 
    : Widget(parent) 
{
    this->fader = fader;
    state = -1;
    mode = SINGLE_COLOR;
    sub_state = 0;
    
    x=10;
    y=20;
    
    red = 50;
    green = 50;
    blue = 50;
    
    period = 500;
    phase1 = 100;
    phase2 = 200;
    
    active_item = 0;
        
    redbox = new InputBox(this, "Red:", 0, 255, red);
    greenbox = new InputBox(this, "Green:", 0, 255, green);
    bluebox = new InputBox(this, "Blue:", 0, 255, blue);
    done = new MenuItem("Done", this);     
    done->set_target(parent);
    
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void LightRGB_Menu::input(void) {
   
    active_item += enc->getDirection();
    active_item %= 4;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 1:
                redbox->claim_input();
                break;
            case 2:
                greenbox->claim_input();
                break;
            case 3:
                bluebox->claim_input();
                break;
            case 4:
                done->claim_input();
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

            if (Widget::blinkfast) {
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
