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

//Menu stuff
#include <Menu.h>
#include <Clock_Menu.h>
class Clock_Menu;
#include <Alarm_Menu.h>
class Alarm_Menu;
#include <Setup_Menu.h>
class Setup_Menu;
#include <LightRGB_Menu.h>
class LightRGB_Menu;


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
#define STATE_LCDRGB 4

//define mpr121 buttons
#define MPR121_MENU 1

class UI {
  public:

    UI(Encoder *encoder, Fader *fader);
    void draw();
    void init();
    void cycleRBG(long ms);

    void getTime();
    int getHours();
    int getMinutes();
    int getSeconds();
   
    void getLux();

    //function has to be called in main programm at a period of 500ms
    //it is used to let stuff on the display blink
    void switch_blink();
    void switch_blinkfast();

    void update_input();

  private:

    Clock_Menu* clockm;
    Setup_Menu* setupm;
    Alarm_Menu* alarmm;   
    LightRGB_Menu* lightm;
    
    Alarm alarm;
   
    U8GLIB_LM6059_2X u8g;
    
    int ui_state;
    int dim; // has to be between 26 and 255 !
    int redVal; // Variables to store the values to send to the pins
    int greenVal;   // Initial values are Red full, Green and Blue off
    int blueVal;
    int phase_green;
    int phase_blue;
    int period;
    bool backlight;

    long lux;

    DS1307 clock;
    Encoder *enc;
    Fader *fade;

    RTC_clock *due_clock;
    const char* daynames[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
};

//extern UI ui;

#endif
