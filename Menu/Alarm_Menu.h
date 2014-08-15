/* 
 * File:   alarm_menu.h
 * Author: sei
 *
 * Created on 14. August 2014, 22:13
 */

#ifndef ALARM_MENU_H
#define	ALARM_MENU_H

#include "Menu.h"
#include "UI.h"

class Alarm_Menu : public Menu {

    public:
        Alarm_Menu(Encoder *encoder, U8GLIB *u8glib,int *parent_state);
        void draw();
        void input();
        
    protected:
        int alarm_state;
        int alarm_hour;
        int alarm_minute;
        boolean alarm_is_set;
        
        String time2str(int hour,int minute);
        String Alarm_Menu::dec2str(int dec);

};

#endif	/* ALARM_MENU_H */

