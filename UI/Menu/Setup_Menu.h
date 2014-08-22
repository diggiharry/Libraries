/* 
 * File:   Setup_Menu.h
 * Author: sei
 *
 * Created on 15. August 2014, 19:31
 */

#ifndef SETUP_MENU_H
#define	SETUP_MENU_H

#include <Container.h>
#include <../Widgets/MenuItem.h>
#include "UI.h"

class Setup_Menu : public Menu {
public:
    Setup_Menu(Widget *parent);
    
    void draw();
    void input();
    
private:
    Widget *selected;
    
    const String item_labels[4] = {"Set Alarm","Set Lights","Settings","Exit"};
    MenuItem items[4];
            
};

#endif	/* SETUP_MENU_H */

