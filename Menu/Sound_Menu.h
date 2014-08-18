/* 
 * File:   Sound_Menu.h
 * Author: sei
 *
 * Created on 17. August 2014, 21:25
 */

#ifndef SOUND_MENU_H
#define	SOUND_MENU_H

#include <Menu.h>
#include "UI.h"

class Sound_Menu : public Menu {
public:
    Sound_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state);
    void draw();
    void input();
    
private:
    int state;

};

#endif	/* SOUND_MENU_H */

