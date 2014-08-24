/* 
 * File:   Colorwave_Menu.h
 * Author: sei
 *
 * Created on 23. August 2014, 18:44
 */

#ifndef COLORWAVE_MENU_H
#define	COLORWAVE_MENU_H

#include <Widget.h>
#include "InputBox.h"
#include "MenuItem.h"
#include <Fader.h>

class Colorwave_Menu : public Widget {
public:
    Colorwave_Menu(Widget *parent, Fader *fader);
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

#endif	/* COLORWAVE_MENU_H */

