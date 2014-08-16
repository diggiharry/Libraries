/* 
 * File:   alarm_menu.h
 * Author: sei
 *
 * Created on 14. August 2014, 22:13
 */

#ifndef ALARM_MENU_H
#define	ALARM_MENU_H

#include <Menu.h>
#include "UI.h"
#include "Encoder.h"
#include <Alarm.h>

class Alarm_Menu : public Menu {

    public:
        Alarm_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state,Alarm *alarm) ;
        void draw();
        void input();

    private:
        int alarm_state;
        Alarm* alarm;
};

#endif	/* ALARM_MENU_H */

