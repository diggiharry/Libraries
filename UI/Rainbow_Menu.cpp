/* 
 * File:   Rainbow_Menu.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 18:21
 */

#include "Rainbow_Menu.h"

Rainbow_Menu::Rainbow_Menu(Widget *parent, Fader *fader) 
    : Widget(parent) 
{
    this->fader = fader;
    
    x = 0;
    y = 5;

    period = 500;      
    phase1 = 100;
    phase2 = 200;
     
    active_item = 0;
    int i = 0;    
    periodbox = new InputBox(this, "Period", 20, 1000, period);
    periodbox->set_pos(x+20,y+10+i*(periodbox->get_height()+4)-2);
    i++;
    phase1box = new InputBox(this, "Phase 1", 0, 300, phase1);
    phase1box->set_pos(x+20,y+10+i*(phase1box->get_height()+4)-2);
    i++;
    phase2box = new InputBox(this, "Phase 2", 0, 300, phase2);
    phase2box->set_pos(x+20,y+10+i*(phase2box->get_height()+4)-2);
    i++;
    done = new MenuItem("Done", this);     
    done->set_pos(x+20,y+10+i*(done->get_height()+4)-2);
   
}


void Rainbow_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Rainbow_Menu::input(void) {
   
    active_item += enc->getDirection();
    if (active_item < 0) active_item = 3;
    active_item %= 4;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 0:
                periodbox->claim_input();
                break;
            case 1:
                phase1box->claim_input();
                break;
            case 2:
                phase2box->claim_input();
                break;
            case 3:
                active_item = 0;
                fader->start_rainbow(period, phase1, phase2);
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
void Rainbow_Menu::draw(void) {
    
    periodbox->draw();
    phase1box->draw();
    phase2box->draw();
    done->draw();

    u8g->setFont(u8g_font_cu12_67_75);
        switch(active_item) {
            case 0:
                u8g->setPrintPos(5,periodbox->get_y()+3);            
                break;
            case 1:
                u8g->setPrintPos(5,phase1box->get_y()+3);            
                break;
            case 2:
                u8g->setPrintPos(5,phase2box->get_y()+3);            
                break;
            case 3:
                u8g->setPrintPos(5,done->get_y()+3);            
                break;            
        }
    u8g->print( (char) 104 );
    
    //period = ((float) periodbox->get_value() / 100 )*1023;
    //phase1 = ((float) phase1box->get_value() / 100 )*1023;
    //phase2 = ((float) phase2box->get_value() / 100 )*1023;   
    period = periodbox->get_value() ;
    phase1 = phase1box->get_value() ;
    phase2 = phase2box->get_value() ;   
}
