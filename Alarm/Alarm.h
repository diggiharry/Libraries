/* 
 * File:   Alarm.h
 * Author: sei
 *
 * Created on 16. August 2014, 17:17
 */

#ifndef ALARM_H
#define	ALARM_H

#include <Arduino.h>

class Alarm {
public:
    Alarm();
    
    void set_hour(int hour);
    void set_minute(int minute);
    void set(boolean enabled);
    boolean is_set();
    int get_hour();
    int get_minute();
    
private:
    int alarm_hour;
    int alarm_minute;
    boolean alarm_is_set;
};

#endif	/* ALARM_H */

