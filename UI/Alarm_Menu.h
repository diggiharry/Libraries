/* 
 * File:   alarm_menu.h
 * Author: sei
 *
 * Created on 14. August 2014, 22:13
 */

#ifndef ALARM_MENU_H
#define	ALARM_MENU_H

#include <Widget.h>
#include <Alarm.h>

class Alarm_Menu : public Widget {

    public:
        Alarm_Menu(Widget *parent, Alarm *alarm) ;
        void draw();
        void input();
        void claim_input();
        
    private:
        Alarm* alarm;
        int alarm_state;
        int hour;
        int minute;
        int set;
        
};

#endif	/* ALARM_MENU_H */

