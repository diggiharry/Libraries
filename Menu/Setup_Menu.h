/* 
 * File:   Setup_Menu.h
 * Author: sei
 *
 * Created on 15. August 2014, 19:31
 */

#ifndef SETUP_MENU_H
#define	SETUP_MENU_H

#include <Menu.h>
#include "UI.h"

class Setup_Menu : public Menu {
public:
    Setup_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state);
    void draw();
    void input();
    
private:
    int setup_state;

};

#endif	/* SETUP_MENU_H */

