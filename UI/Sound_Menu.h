/* 
 * File:   Sound_Menu.h
 * Author: sei
 *
 * Created on 23. August 2014, 19:02
 */

#ifndef SOUND_MENU_H
#define	SOUND_MENU_H

#include <Widget.h>
#include "LeftRightBox.h"
#include "MenuItem.h"
#include <SoundManager.h>

class Sound_Menu : public Widget {
public:
    Sound_Menu(Widget *parent, SoundManager *sound);
    void draw();
    void input();
    void claim_input();    
    
private:
    SoundManager *sound;
    
    LeftRightBox *volbox; 
    LeftRightBox *songbox; 
    MenuItem *done;  
    
    int volume;
    int song;
    
    int active_item;     
};

#endif	/* SOUND_MENU_H */

