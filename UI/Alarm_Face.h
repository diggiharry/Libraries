/* 
 * File:   Alarm_Face.h
 * Author: sei
 *
 * Created on 28. August 2014, 19:50
 */

#ifndef ALARM_FACE_H
#define	ALARM_FACE_H

#include <Widget.h>
#include <Alarm.h>
#include <rtc_clock.h>
#include <SoundManager.h>

class Alarm_Face : public Widget {
public:
    Alarm_Face(Widget *parent, Alarm* alarm, RTC_clock* clock, SoundManager *sound);

    void draw();
    void input();
    void claim_input();    

private:
    Alarm* alarm;
    RTC_clock* clock;  
    SoundManager* sound;
};


#endif	/* ALARM_FACE_H */

