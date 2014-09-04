/* 
 * File:   Background_Menu.h
 * Author: sei
 *
 * Created on 25. August 2014, 20:36
 */

#ifndef BACKGROUND_MENU_H
#define	BACKGROUND_MENU_H

#include <Arduino.h>
#include <Widget.h>
#include <InputBox.h>
#include <MenuItem.h>

// the LCD backlight is connected up to a pin so you can turn it on & off
#define BACKLIGHT_RED 5
#define BACKLIGHT_GREEN 6 
#define BACKLIGHT_BLUE 7

class Background_Menu : public Widget {
public:
    Background_Menu(Widget *parent);
    void draw();
    void input();
    void claim_input();
    void cycleRBG(long ms);
    
private:
    void setled();
    
    InputBox *redbox;
    InputBox *greenbox;
    InputBox *bluebox;
    MenuItem *done;    
        
    int red,green,blue;
    int phase_green,phase_blue,period;
    int active_item;     
};


#endif	/* BACKGROUND_MENU_H */

