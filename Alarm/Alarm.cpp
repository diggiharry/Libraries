/* 
 * File:   Alarm.cpp
 * Author: sei
 * 
 * Created on 16. August 2014, 17:17
 */

#include "Alarm.h"

Alarm::Alarm(RTC_clock *clock, SoundManager *sound, Fader *fader) {
    this->clock = clock;
    this->sound = sound;
    this->fader = fader;
    alarm_hour = 0;
    alarm_minute = 0;
    alarm_is_set = false;
}

void Alarm::set_hour(int hour) {
    alarm_hour = hour;
}

void Alarm::set_minute(int minute) {
    alarm_minute = minute;
}

void Alarm::set(boolean enabled) {
    alarm_is_set = enabled;
}

boolean Alarm::is_set() {
    return alarm_is_set;
}

int Alarm::get_hour() {
    return alarm_hour;
}

int Alarm::get_minute() {
    return alarm_minute;
}

void Alarm::check() {
    if (alarm_is_set) {
        int minutes = clock->get_minutes();
        int hour = clock->get_hours();
        
        minutes = hour*60+minutes;
        int alarm_minutes = alarm_hour*60+alarm_minute;        
            
        //if (alarm_minutes == (minutes-30) ) fader->start_sunrise(30*60*1000); 
        if (alarm_minutes == (minutes-30) ) fader->start_sunrise(60*1000); 
        if (alarm_minutes == minutes) sound->play();       
    }         
}