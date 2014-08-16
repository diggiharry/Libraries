/* 
 * File:   Alarm.cpp
 * Author: sei
 * 
 * Created on 16. August 2014, 17:17
 */

#include "Alarm.h"

Alarm::Alarm() {
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