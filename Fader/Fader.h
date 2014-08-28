/*
 *	Library for fading the RGB Leds
 *
 *
 */

#ifndef fader_h
#define fader_h

#include <ShiftBar.h>

//define states
#define IDLE 0
#define RAINBOW 2
#define FADE_TO_COLOR 3
#define SUNRISE 4
#define COLORWAVE 5


class Fader {
    public:
        Fader();
        void update(unsigned long ms);
        void init();
        void start_rainbow(int period = 5000, int phase1 = 1000, int phase2 = 2000);        
        void start_rainbow(void);        
        void start_fade_to_color(int colors[12],unsigned long duration = 1000);
        void start_fade_to_color(void);
        void start_sunrise(unsigned long duration);
        void start_colorwave(int period);
        void start_colorwave(void);
        
        void set_color(int colors[12]);
        void set_all(int red, int green, int blue);
        void fade_out();
        void start_last_effect();
        
    private: 
        int state;   
        float values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
        float target_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};   
        float slopes[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};   
        unsigned long prev_millis;
        unsigned long dur;
        unsigned long start;
        int target_state;
        
        float triangle_function(unsigned long ms,unsigned int period, int phase);
    
        void fade_to_color();
        float singlecolor_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};

        
        //void rgbToHsv(byte r, byte g, byte b, double hsv[]);
        void hsvToRgb(float h, float s, float v, float rgb[]);

        // Stuff for rainbow
        void rainbow();
        int rainbow_phase1 = 500;
        int rainbow_phase2 = 1000;
        int rainbow_period = 2000;

        // Stuff for sunrise
        void sunrise();
        int count;
        int section_duration;
        const int sunrise_col[15] = { 148,60,0, 928,172,0, 928,870,192, 1023,954,742, 1023,1023,1023  };
        //const int sunrise_col[15] = { 148,60,0, 928,172,0, 928,870,192, 1023,954,742, 1023,1023,1023  };
        //const int sunrise_col[15] = { 500,500,500, 0,0,0, 500,500,500, 0,0,0, 1023,1023,1023  };
  
        //Stuff for colorwave
        void colorwave();
        int cw_period = 2000;

        void (Fader::*last_effect) (void);
};

#endif
