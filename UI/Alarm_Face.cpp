/* 
 * File:   Alarm_Face.cpp
 * Author: sei
 * 
 * Created on 28. August 2014, 19:50
 */

#include "Alarm_Face.h"

Alarm_Face::Alarm_Face(Widget *parent, Alarm* alarm, RTC_clock* clock, SoundManager *sound)
    : Widget(parent)
{
    this->alarm = alarm;
    this->clock = clock;
    this->sound = sound;
}

void Alarm_Face::claim_input() {
    Widget::claim_input();
    enc->setUndersample(20);
    //sound->play();
    //sound->set_volume(volume);
}

void Alarm_Face::input(void) 
{   
    if (enc->isReleased()) {

    }  
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void Alarm_Face::draw(void) {
   
    int time_y = 47;
    int time_x = 10;

    u8g->setFont(u8g_font_fixed_v0);
    u8g->setPrintPos(90,57);
    time_y = 40;

    if (Widget::blink) {
        // Draw Time
        u8g->setFont(u8g_font_fub30n);
        u8g->setPrintPos(time_x,time_y);
        u8g->print(dec2str(clock->get_hours()));

        u8g->setPrintPos(time_x+60,time_y);
        u8g->print(dec2str(clock->get_minutes()));
    }

    u8g->setFont(u8g_font_fixed_v0);
    u8g->setPrintPos(time_x+107,time_y);
    u8g->print(dec2str(clock->get_seconds()));

    u8g->setFont(u8g_font_fub30n);
    u8g->setPrintPos(time_x+46,time_y-5);
    u8g->print(":");
}

