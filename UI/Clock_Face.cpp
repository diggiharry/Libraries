/* 
 * File:   Clock_Face.cpp
 * Author: sei
 * 
 * Created on 22. August 2014, 17:48
 */

#include "Clock_Face.h"

Clock_Face::Clock_Face(Widget *parent, Alarm* alarm, RTC_clock* clock)
    : Widget(parent)
{
    this->alarm = alarm;
    this->clock = clock;
}

Clock_Face::Clock_Face(Base *base, Encoder *encoder,U8G_CLASS *u8glib, Alarm* alarm, RTC_clock* clock)
    : Widget(base, encoder, u8glib)
{
    this->enc = encoder;
    this->u8g = u8glib; 
    this->alarm = alarm;
    this->clock = clock;
}

void Clock_Face::input(void) {
  
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void Clock_Face::draw(void) {
   
    Serial.println(x);
    
    int time_y = 47;
    int time_x = 10;

    // draw alarm time and set height of time
    if (alarm->is_set()) {
            u8g->setFont(u8g_font_fixed_v0);
            u8g->setPrintPos(27,57);
            u8g->print("ALARM AT");
            u8g->setPrintPos(77,57);
            u8g->print( time2str(alarm->get_hour(),alarm->get_minute()) );
            time_y = 40;
    } else {
      u8g->setFont(u8g_font_fixed_v0);
      u8g->setPrintPos(50,57);
      //u8g->print(lux);
      u8g->setPrintPos(90,57);
      time_y = 40;
    }

    // Draw Time
    u8g->setFont(u8g_font_fub30n);
    u8g->setPrintPos(time_x,time_y);
    //u8g.print(dec2str(clock.hour));
    u8g->print(dec2str(clock->get_hours()));

    u8g->setPrintPos(time_x+60,time_y);
    //u8g.print(dec2str(clock.minute));
    u8g->print(dec2str(clock->get_minutes()));

    u8g->setFont(u8g_font_fixed_v0);
    u8g->setPrintPos(time_x+106,time_y);
    //u8g.print(dec2str(clock.second));
    u8g->print(dec2str(clock->get_seconds()));

    // draw blinking colon
    if (Widget::blink) {
            u8g->setFont(u8g_font_fub30n);
            //u8g.setFont(u8g_font_courR24);
            u8g->setPrintPos(time_x+46,time_y-5);
            u8g->print(":");
    }
}
