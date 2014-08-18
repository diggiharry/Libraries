/* 
 * File:   LightRGB_Menu.h
 * Author: sei
 *
 * Created on 16. August 2014, 19:10
 */

#ifndef LIGHTRGB_MENU_H
#define	LIGHTRGB_MENU_H

#include <Menu.h>
#include "UI.h"
#include "Fader.h"

// define different states
#define SELECT_MODE 0
#define SINGLE_COLOR 1
#define RAINBOW 2
#define SUNRISE 3
#define COLORWAVE 4


class LightRGB_Menu : public Menu {
public:
    LightRGB_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state, Fader *fader);
    void draw();
    void input();
    
private:
    Fader *fader;
    
    int state;
    int mode;
    
    int sub_state;
    
    int red,green,blue;
    
    int period,phase1,phase2;
   
    boolean make_input;
    
};

#endif	/* LIGHTRGB_MENU_H */

