/*
 *	Library for the ui of the alarmclock
 *
 *
 */

#ifndef ui_h
#define ui_h

//class U8GLIB;

#include <Arduino.h>
#include <U8glib.h>
#include <u8g.h>
#include <DS1307.h>
#include <Digital_Light_TSL2561.h>
#include <Encoder.h>
#include <rtc_clock.h>
#include "Fader.h"
#include "Alarm.h"

//#include <Widget.h>
#include <Menu.h>
#include <Clock_Face.h>
#include <Alarm_Menu.h>
#include <LightRGB_Menu.h>

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

    UI(Encoder *encoder, Fader *fader, U8G_CLASS *u8g);
    void draw();
    void input();

    void init();
   
    void cycleRBG(long ms);

    void getTime();
    int getHours();
    int getMinutes();
    int getSeconds();
   
    void getLux();

  private:

    Widget *root;
    Menu *setup; 
    Clock_Face *clockface;
    Alarm_Menu *alarmm;
    LightRGB_Menu *lightm;
        
    Alarm *alarm;
   
    U8G_CLASS *u8g;
    
    int dim; // has to be between 26 and 255 !
    int redVal; // Variables to store the values to send to the pins
    int greenVal;   // Initial values are Red full, Green and Blue off
    int blueVal;
    int phase_green;
    int phase_blue;
    int period;
    bool backlight;

    long lux;

    Encoder *enc;
    
    DS1307 clock;

    Fader *fade;

    RTC_clock *due_clock;
    const char* daynames[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
};

//extern UI ui;

#endif
