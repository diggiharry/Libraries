/* 
 * File:   Clock_Menu.h
 * Author: sei
 *
 * Created on 24. August 2014, 22:03
 */

#ifndef CLOCK_MENU_H
#define	CLOCK_MENU_H

#include "Widget.h"
#include <DS1307.h>
#include <rtc_clock.h>

class Clock_Menu : public Widget {
    public:
        Clock_Menu(Widget *parent, RTC_clock* due_clock, DS1307* ext_clock) ;
        void draw();
        void input();
        void claim_input();
        
    private:
        RTC_clock* due_clock;        
        DS1307* ext_clock;
        int state;
        int hour;
        int minute;
        int second;
        
};


#endif	/* CLOCK_MENU_H */

