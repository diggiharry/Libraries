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
    start_light = false;
    start_sound = false;   
    stop_light = false;
    stop_sound = false;
    timeout = false;
}

void Alarm::set_hour(int hour) {
    alarm_hour = hour;
    alarm_minutes = (alarm_hour+1)*60+alarm_minute;
}

void Alarm::set_minute(int minute) {
    alarm_minute = minute;
    alarm_minutes = (alarm_hour+1)*60+alarm_minute;
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

void Alarm::disable_alarm() {
    alarm_is_set = false;
    start_light = false;
    start_sound = false;   
    stop_light = true;
    stop_sound = true;  
    timeout = false;
}

void Alarm::enable_alarm() {
    alarm_is_set = true;
    start_light = false;
    start_sound = false;   
    stop_light = false;
    stop_sound = false;  
    timeout = false;
}

void Alarm::check() {
    int minutes;
    int hour;
  
    minutes = clock->get_minutes();
    hour = clock->get_hours();
        
    minutes = (hour+1)*60+minutes;   
    
    if (alarm_is_set) {           
        if ((minutes+30) == alarm_minutes) start_light = true;
        if (minutes == alarm_minutes) start_sound = true;

        if ( (minutes-45) == alarm_minutes) {
            stop_sound = true;
            stop_light = true;
            alarm_is_set = false;
        }            

    }      
    
    if (start_light) {
        //fader->start_sunrise(60*1000);
        fader->start_sunrise(5*60*1000);      
        start_light = false;
    }
    
    if (start_sound) {
        sound->play();
        start_sound = false;
    }

    if (stop_sound) {
        sound->stop();
        stop_sound = false;
    }
    
    if (stop_light) {
        fader->fade_out(10000);
        stop_light = false;
    }
    

}