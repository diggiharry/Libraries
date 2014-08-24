/* 
 * File:   LightRGB_Menu.cpp
 * Author: sei
 * 
 * Created on 16. August 2014, 19:10
 */

#include "SingleColor_Menu.h"

SingleColor_Menu::SingleColor_Menu(Widget *parent, Fader *fader) 
    : Widget(parent) 
{
    this->fader = fader;
    
    x = 0;
    y = 5;
    
    red = 50;
    green = 50;
    blue = 50;  
     
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
   
}


void SingleColor_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void SingleColor_Menu::input(void) {
   
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
void SingleColor_Menu::draw(void) {
    
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
    
    red = ((float) redbox->get_value() / 100 )*1023;
    green = ((float) greenbox->get_value() / 100 )*1023;
    blue = ((float) bluebox->get_value() / 100 )*1023;   
    fader->set_all( red, green, blue );
}
