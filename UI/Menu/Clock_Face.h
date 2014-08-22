/* 
 * File:   Clock_Face.h
 * Author: sei
 *
 * Created on 22. August 2014, 17:48
 */

#ifndef CLOCK_FACE_H
#define	CLOCK_FACE_H

#include <Widget.h>
#include <Alarm.h>
#include <rtc_clock.h>

class Clock_Face : public Widget {
public:
    Clock_Face(Widget *parent, Alarm* alarm, RTC_clock* clock);

    void draw();
    void input();

private:
    Alarm* alarm;
    RTC_clock* clock;     
};

#endif	/* CLOCK_FACE_H */

