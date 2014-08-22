/* 
 * File:   Sound_Menu.h
 * Author: sei
 *
 * Created on 17. August 2014, 21:25
 */

#ifndef SOUND_MENU_H
#define	SOUND_MENU_H

#include <Widget.h>
#include "UI.h"


#define SOUND_VOLUME 0
#define SOUND_TRACK 1

class Sound_Menu : public Widget {
public:
    Sound_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state);
    void draw();
    void input();
    
private:
    int state;
    boolean make_input;
};

#endif	/* SOUND_MENU_H */

