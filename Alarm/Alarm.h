/* 
 * File:   Alarm.h
 * Author: sei
 *
 * Created on 16. August 2014, 17:17
 */

#ifndef ALARM_H
#define	ALARM_H

#include "rtc_clock.h"
#include "SoundManager.h"
#include "Fader.h"

class Alarm {
public:
    Alarm(RTC_clock *clock, SoundManager *sound, Fader *fader);
    
    void set_hour(int hour);
    void set_minute(int minute);
    boolean is_set();
    int get_hour();
    int get_minute();
    void enable_alarm();
    void disable_alarm();
    
    void check();
    
private:
    int alarm_hour;
    int alarm_minute;
    int alarm_minutes;
    boolean alarm_is_set;
    RTC_clock *clock;
    SoundManager *sound;
    Fader *fader;
    boolean alarmed;
    boolean start_light;
    boolean start_sound;
    boolean stop_light;
    boolean stop_sound;
    boolean timeout;
};

#endif	/* ALARM_H */

