/* 
 * File:   Background_Menu.cpp
 * Author: sei
 * 
 * Created on 25. August 2014, 20:36
 */

#include "Background_Menu.h"

Background_Menu::Background_Menu(Widget *parent) 
    : Widget(parent)
{
    pinMode(BACKLIGHT_RED,   OUTPUT);   // sets the pins as output
    pinMode(BACKLIGHT_GREEN, OUTPUT);
    pinMode(BACKLIGHT_BLUE,  OUTPUT);
    
    period = 1000;
    phase_green = 300;
    phase_blue = 600;
        
    x = 0;
    y = 5;
        
    red = 0;
    green = 0;
    blue = 0;
    
    active_item = 0;
    int i = 0;    
    redbox = new InputBox(this, "Red", 0, 100, red);
    redbox->set_pos(x+20,y+10+i*(redbox->get_height()+4)-2);
    i++;
    greenbox = new InputBox(this, "Green", 0, 100, green);
    greenbox->set_pos(x+20,y+10+i*(greenbox->get_height()+4)-2);
    i++;
    bluebox = new InputBox(this, "Blue", 0, 100, blue);
    bluebox->set_pos(x+20,y+10+i*(bluebox->get_height()+4)-2);
    i++;
    done = new MenuItem("Done", this);     
    done->set_pos(x+20,y+10+i*(done->get_height()+4)-2);
    
    analogWrite(BACKLIGHT_RED,   red);   // Write current values to LED pins
    analogWrite(BACKLIGHT_GREEN, green);
    analogWrite(BACKLIGHT_BLUE,  blue);   
    setled();
}

/*
 * function cycleRBG()
 *
 * function for cycling through the colors of the backlight
 */
void Background_Menu::cycleRBG(long ms) { 
	red = floor( 128 + 127 * (double)  cos(2*PI/period*ms) );
	green = floor( 128 + 127 * (double) cos(2*PI/period*(phase_green-ms)));
	blue = floor( 128 + 127 * (double) cos(2*PI/period*(phase_blue-ms)));
  
	analogWrite(BACKLIGHT_RED,   red);   // Write current values to LED pins
	analogWrite(BACKLIGHT_GREEN, green);
	analogWrite(BACKLIGHT_BLUE,  blue);
}

void Background_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Background_Menu::input(void) {
   
    active_item += enc->getDirection();
    if (active_item < 0) active_item = 3;
    active_item %= 4;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 0:
                redbox->claim_input();
                break;
            case 1:
                greenbox->claim_input();
                break;
            case 2:
                bluebox->claim_input();
                break;
            case 3:
                active_item = 0;
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
void Background_Menu::draw(void) {
    
    redbox->draw();
    greenbox->draw();
    bluebox->draw();
    done->draw();

    u8g->setFont(u8g_font_cu12_67_75);
        switch(active_item) {
            case 0:
                u8g->setPrintPos(5,redbox->get_y()+3);            
                break;
            case 1:
                u8g->setPrintPos(5,greenbox->get_y()+3);            
                break;
            case 2:
                u8g->setPrintPos(5,bluebox->get_y()+3);            
                break;
            case 3:
                u8g->setPrintPos(5,done->get_y()+3);            
                break;            
        }
    u8g->print( (char) 104 );
    
    red = redbox->get_value() ;
    green = greenbox->get_value();
    blue = bluebox->get_value();   
    setled();
}

void Background_Menu::setled() {
    analogWrite(BACKLIGHT_RED,  255 - ((float) red / 100 )*255);   // Write current values to LED pins
    analogWrite(BACKLIGHT_GREEN, 255 - ((float) green / 100 )*255);
    analogWrite(BACKLIGHT_BLUE, 255 - ((float) blue / 100 )*255);     
}
