/* 
 * File:   SetClock_Menu.h
 * Author: sei
 *
 * Created on 17. August 2014, 21:25
 */

#ifndef SETCLOCK_MENU_H
#define	SETCLOCK_MENU_H

#include <Widget.h>
#include <DS1307.h>
#include <rtc_clock.h>

class SetClock_Menu : public Widget {
public:
    SetClock_Menu(Widget *parent, RTC_clock* due_clock, DS1307* ext_clock);
    void draw();
    void input();
    
private:
    int state;
    RTC_clock* due_clock;
    DS1307* ext_clock;
    int hour;
    int minute;
    int second;
};

#endif	/* SETCLOCK_MENU_H */

