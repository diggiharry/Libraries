/* 
 * File:   LightRGB_Menu.h
 * Author: sei
 *
 * Created on 16. August 2014, 19:10
 */

#ifndef LIGHTRGB_MENU_H
#define	LIGHTRGB_MENU_H

#include <Widget.h>
#include <InputBox.h>
#include <MenuItem.h>
#include "Fader.h"

// define different states
#define SELECT_MODE 0
#define SINGLE_COLOR 1
#define RAINBOW 2
#define SUNRISE 3
#define COLORWAVE 4


class LightRGB_Menu : public Widget {
public:
    LightRGB_Menu(Widget *parent, Fader *fader);
    void draw();
    void input();
    
private:
    
    InputBox *redbox;
    InputBox *greenbox;
    InputBox *bluebox;
    MenuItem *done;    
    
    Fader *fader;
    
    int state;
    int mode;
    
    int sub_state;
    
    int red,green,blue;
    
    int period,phase1,phase2;
    
    int active_item; 
   
    boolean make_input;
    
};

#endif	/* LIGHTRGB_MENU_H */

