/*
 *	Library for the ui of the alarmclock
 *
 *
 */

#ifndef ui_h
#define ui_h

class U8GLIB;

#include <Arduino.h>
#include <U8glib.h>
#include <u8g.h>
#include <DS1307.h>
#include <Digital_Light_TSL2561.h>
#include <Encoder.h>
#include <rtc_clock.h>


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

    UI(Encoder *encoder);
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
    void draw_clock();
    void enc_clock();

    //Variables for ui_state = STATE_SETUP
    int setup_state;
    void draw_setup();
    void enc_setup();

    //Variables for ui_state = STATE_ALARM
    int alarm_state;
    void draw_alarm();
    void enc_alarm();
    int alarm_hour;
    int alarm_minute;
    boolean alarm_is_set;

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

    // Variables for blinking colon
    unsigned long interval;           // interval at which to blink (milliseconds)
    unsigned long previousMillis;        // will store last time LED was updated
    unsigned long currentMillis;

    //variables responsible for blinking
    boolean blink;
    boolean blinkfast;

    //transforms two number like 2 and 15 to 02:15
    String time2str(int hour,int minute);
    //converts a 2 decimal number to a String:  1 -> "01"
    String dec2str(int dec);

    DS1307 clock;
    Encoder *enc;
    RTC_clock *due_clock;
    const char* daynames[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
};

//extern UI ui;

#endif
