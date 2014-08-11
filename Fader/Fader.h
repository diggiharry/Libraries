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
#define FADE_TO_RAINBOW 1
#define RAINBOW 2
#define FADE_TO_COLOR 3

class Fader {
    public:
        Fader();
        void update(unsigned long ms);
        void init();
        void start_rainbow();        
        void start_fade_to_color(int colors[12]);
        
    private: 
        int state;   
        float values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
        float target_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};   
        
        int triangle_function(unsigned long ms,unsigned int period, int phase);
        void fade_to_rainbow(unsigned long ms);
        void fade_to_color(unsigned long ms);
       
        int phase_green = 1500;
        int phase_blue = 3000;
        int period = 5000;
        unsigned long start;
        void rainbow(unsigned long ms);

};

#endif
