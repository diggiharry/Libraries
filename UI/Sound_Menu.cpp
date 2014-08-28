/* 
 * File:   Sound_Menu.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 19:02
 */

#include "Sound_Menu.h"

Sound_Menu::Sound_Menu(Widget *parent, SoundManager *sound) 
    : Widget(parent) 
{  
    this->sound = sound;
    
    x = 0;
    y = 5;

    volume = 10;      
    song = 1;
     
    active_item = 0;
    int i = 0;    
    volbox = new LeftRightBox(this, "Volume");
    volbox->set_pos(x+20,y+10+i*(volbox->get_height()+4)-2);
    i++;
    songbox = new LeftRightBox(this, "Song");
    songbox->set_pos(x+20,y+10+i*(songbox->get_height()+4)-2);
    i++;
    done = new MenuItem("Done", this);     
    done->set_pos(x+20,y+10+i*(done->get_height()+4)+3);
   
}

void Sound_Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10);
    sound->stop();
    sound->set_volume(volume);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void Sound_Menu::input(void) {
   
    active_item += enc->getDirection();
    if (active_item < 0) active_item = 2;
    active_item %= 3;    
    
    if (enc->isReleased()) {
        switch(active_item) {
            case 0:
                sound->play();
                //delay(400);
                volbox->claim_input();
                break;
            case 1:
                sound->play();
                //delay(400);
                songbox->claim_input();
                break;
            case 2:
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
void Sound_Menu::draw(void) {
    
    volbox->draw();
    songbox->draw();
    done->draw();

    if (volbox->is_increased()) {
        volume++;
        if (volume > 30) volume = 30;
        sound->set_volume(volume);
        //delay(400);
    }
    if (volbox->is_decreased()) {
        volume--;
        if (volume < 0) volume = 0;
        sound->set_volume(volume);
        //delay(400);
    }
    if (songbox->is_increased()) {
        sound->next();        
        //delay(400);
    }
    if (songbox->is_decreased()) {
        sound->prev();
        //delay(400);        
    }
    
    u8g->setFont(u8g_font_cu12_67_75);
        switch(active_item) {
            case 0:
                u8g->setPrintPos(5,volbox->get_y()+3);
                break;
            case 1:
                u8g->setPrintPos(5,songbox->get_y()+3);            
                break;
            case 2:
                u8g->setPrintPos(5,done->get_y()+3);            
                break;            
        }
    u8g->print( (char) 104 );
}
