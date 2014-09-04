/* 
 * File:   Dawn_Menu.h
 * Author: sei
 *
 * Created on 30. August 2014, 00:04
 */

#ifndef DAWN_MENU_H
#define	DAWN_MENU_H

#include <Widget.h>
#include "InputBox.h"
#include "MenuItem.h"
#include <Alarm.h>

class Dawn_Menu : public Widget {
public:
    Dawn_Menu(Widget *parent, Alarm *alarm);
    void draw();
    void input();
    void claim_input();
    
private:
    
    InputBox *durbox;    
    MenuItem *done;    
    
    Alarm *alarm;
    
    int duration;
    
    int active_item;     
};

#endif	/* DAWN_MENU_H */

