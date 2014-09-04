/* 
 * File:   Rainbow_Menu.h
 * Author: sei
 *
 * Created on 23. August 2014, 18:21
 */

#ifndef RAINBOW_MENU_H
#define	RAINBOW_MENU_H

#include <Widget.h>
#include "InputBox.h"
#include "MenuItem.h"
#include <Fader.h>

class Rainbow_Menu : public Widget {
public:
    Rainbow_Menu(Widget *parent, Fader *fader);
    void draw();
    void input();
    void claim_input();
    
private:
    
    InputBox *periodbox;    
    MenuItem *done;    
    
    Fader *fader;
    
    int period;
    
    int active_item;     
};

#endif	/* RAINBOW_MENU_H */

