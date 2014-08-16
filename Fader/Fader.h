/*
 *	Library for fading the RGB Leds
 *
 *
 */

#ifndef fader_h
#define fader_h


#include <Arduino.h>
#include <ShiftBar.h>

//define states
#define IDLE 0
#define RAINBOW 2
#define FADE_TO_COLOR 3

class Fader {
    public:
        Fader();
        void update(unsigned long ms);
        void init();
        void start_rainbow(int period = 5000, int phase1 = 1000, int phase2 = 2000);        
        void start_fade_to_color(int colors[12],unsigned long duration);
        void set_color(int colors[12]);
        void set_all(int red, int green, int blue);
        
    private: 
        int state;   
        float values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
        float target_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};   
        float slopes[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};   
        unsigned long prev_millis;
        unsigned long dur;
        unsigned long start;
        int target_state;
        
        int triangle_function(unsigned long ms,unsigned int period, int phase);
        void fade_to_color();

        void rgbToHsv(byte r, byte g, byte b, double hsv[]);
        void hsvToRgb(double h, double s, double v, byte rgb[]);
        int phase1 = 500;
        int phase2 = 1000;
        int period = 2000;
        void rainbow();

};

#endif
