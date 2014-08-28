/*
 *	Library for the ui of the alarmclock
 *
 *
 */

#ifndef UI_H
#define UI_H

#include <Arduino.h>
#include <U8glib.h>
#include <u8g.h>
#include <DS1307.h>
#include <Digital_Light_TSL2561.h>
#include <Encoder.h>
#include <rtc_clock.h>
#include "Fader.h"
#include "Alarm.h"
#include "SoundManager.h"

#include <Widget.h>
#include <Menu.h>
#include <Clock_Face.h>
#include <Alarm_Menu.h>
#include <SingleColor_Menu.h>
#include <Rainbow_Menu.h>
#include <Colorwave_Menu.h>
#include <Sound_Menu.h>
#include <Clock_Menu.h>
#include <Background_Menu.h>

#define LCD_MOSI 22
#define LCD_SCK 24
#define LCD_RS 26
#define LCD_RST 28
#define LCD_CS 30

//define states
#define STATE_CLOCK 0
#define STATE_SETUP 1
#define STATE_ALARM 2
#define STATE_LIGHTRGB 3
#define STATE_SETTINGS 4
#define STATE_SETCLOCK 5
#define STATE_SETSOUND 6
#define STATE_LCDRGB 7

//define mpr121 buttons
#define MPR121_MENU 1

class UI {
  public:

    UI(Encoder *encoder, Fader *fader, U8G_CLASS *u8g, SoundManager *sound, RTC_clock *due_clock, Alarm *alarm);
    void draw();
    void input();
    void check_alarm();
    
    void init();
   
    void getTime();
    int getHours();
    int getMinutes();
    int getSeconds();
   
    void getLux();

  private:

    //RootWidget *root;
    Menu *setup; 
    Menu *settings; 
    Menu *lightm; 
    Clock_Face *clockface;
    Alarm_Menu *alarmm;
    SingleColor_Menu *singlecolorm;
    Rainbow_Menu *rainbowm;
    Colorwave_Menu *colorwavem;
    Sound_Menu *soundm;
    Clock_Menu *clockm;
    Background_Menu *backgroundm;
            
    SoundManager *sound;
   
    U8G_CLASS *u8g;
    
    int phase_green;
    int phase_blue;
    int period;
    bool backlight;

    long lux;

    Encoder *enc;
    
    DS1307 ext_clock;

    Fader *fade;

    RTC_clock *due_clock;
    const char* daynames[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    Alarm *alarm;
};

//extern UI ui;

#endif // UI_H
