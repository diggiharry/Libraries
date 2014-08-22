/* 
 * File:   Clock_Menu.h
 * Author: sei
 *
 * Created on 15. August 2014, 19:18
 */

#ifndef CLOCK_MENU_H
#define	CLOCK_MENU_H

#include <Menu.h>
#include "UI.h"
#include "Encoder.h"
#include <Alarm.h>
#include <rtc_clock.h>

class Clock_Menu : public Menu {
public:
    Clock_Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state, RTC_clock *clock, Alarm *alarm);
      
        void draw();
        void input();
private:
        Alarm* alarm;
        RTC_clock* clock;
};

#endif	/* CLOCK_MENU_H */

