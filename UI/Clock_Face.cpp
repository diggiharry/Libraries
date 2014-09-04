/* 
 * File:   Clock_Face.cpp
 * Author: sei
 * 
 * Created on 22. August 2014, 17:48
 */

#include "Clock_Face.h"

/*Clock_Face::Clock_Face(Widget *parent, Alarm* alarm, RTC_clock* clock)
    : Widget(parent)
{
    this->alarm = alarm;
    this->clock = clock;
}*/

Clock_Face::Clock_Face(Encoder *encoder,U8G_CLASS *u8glib, Alarm* alarm, RTC_clock* clock)
    : Widget(encoder, u8glib)
{
    //this->enc = encoder;
    //this->u8g = u8glib; 
    this->alarm = alarm;
    this->clock = clock;
}

void Clock_Face::set_target(Widget *target) {
    this->target = target;
}

void Clock_Face::input(void) 
{   
    if (enc->isReleased()) {
        target->claim_input();
        target->claim_draw();
    }  
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void Clock_Face::draw(void) {
   
    int time_y = 48;
    int time_x = 10;

    // draw alarm time and set height of time
    if (alarm->is_set()) {
            u8g->setFont(u8g_font_fixed_v0);
            u8g->setPrintPos(27,60);
            u8g->print("ALARM AT");
            u8g->setPrintPos(77,60);
            u8g->print( time2str(alarm->get_hour(),alarm->get_minute()) );
    } 

    u8g->setFont(u8g_font_5x7);
    //Draw Date
    u8g->setPrintPos(time_x+15,10);
    
    u8g->print(daynames[clock->get_day_of_week()]);
    u8g->setPrintPos(time_x+37,10);
    u8g->print(dec2str(clock->get_days()));
    u8g->print(".");
    u8g->setPrintPos(time_x+50,10);
    u8g->print(dec2str(clock->get_months()));
    u8g->print(".");
    u8g->setPrintPos(time_x+65,10);
    u8g->print(clock->get_years());
    
    // Draw Time
    u8g->setFont(u8g_font_fub30n);
    u8g->setPrintPos(time_x,time_y);
    //u8g.print(dec2str(clock.hour));
    u8g->print(dec2str(clock->get_hours()));

    u8g->setPrintPos(time_x+60,time_y);
    //u8g.print(dec2str(clock.minute));
    u8g->print(dec2str(clock->get_minutes()));

    u8g->setFont(u8g_font_fixed_v0);
    u8g->setPrintPos(time_x+107,time_y);
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
