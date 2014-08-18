/* 
 * File:   Settings_Menu.h
 * Author: sei
 *
 * Created on 17. August 2014, 21:21
 */

#ifndef SETTINGS_MENU_H
#define	SETTINGS_MENU_H

#include <Menu.h>
#include "UI.h"

class Settings_Menu : public Menu {
public:
    Settings_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state);
    void draw();
    void input();
    
private:
    int state;

};

#endif	/* SETTINGS_MENU_H */

