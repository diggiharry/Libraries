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

class SingleColor_Menu : public Widget {
public:
    SingleColor_Menu(Widget *parent, Fader *fader);
    void draw();
    void input();
    void claim_input();
    
private:
    
    InputBox *redbox;
    InputBox *greenbox;
    InputBox *bluebox;
    MenuItem *done;    
    
    Fader *fader;
    
    int red,green,blue;
    
    int active_item;     
};

#endif	/* LIGHTRGB_MENU_H */

