#include "Fader.h"

unsigned int LED_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
ShiftBar sb(4,LED_values);

Fader::Fader() {
    state = IDLE;
}

void Fader::init() {
    sb.init();
    for (int h = 0;h<4;h++) {
          sb.set(h,values[h*3],values[h*3+1],values[h*3+2]);  
    }
    sb.update();
}

void Fader::update(unsigned long ms) {
    switch(state)
         {
          case	IDLE:
                //...
                break;
          case  FADE_TO_RAINBOW:
                fade_to_rainbow(ms-start);
                break;
          case  RAINBOW:
                rainbow(ms-start);
                break;
           case FADE_TO_COLOR:
                fade_to_color(ms-start);
                break;         
        }
    
    for (int h = 0;h<4;h++) {
          sb.set(h,round(values[h*3]),round(values[h*3+1]),round(values[h*3+2]));  
    }
    sb.update();
}

void Fader::fade_to_color(unsigned long ms) {
    float factor = 0.05; // increase per millisecond
    int err = 0;
    for (int h = 0;h<12;h++) {
        int buf = (values[h]-target_values[h]);
        if (buf < 0) values[h] = values[h] + factor*ms;
        if (buf > 0) values[h] = values[h] - factor*ms;
        err += abs(buf); 
    }    
    if (err < 40) {
        state = IDLE;
        for (int h = 0;h<12;h++) {
            values[h] = target_values[h];
        }
    }   
    start = millis();
}

void Fader::start_fade_to_color(int colors[12]) {   
    state = FADE_TO_COLOR;
    for (int h = 0;h<12;h++) {
        target_values[h] = colors[h];
    }
    start = millis();
}

int Fader::triangle_function(unsigned long ms,unsigned int period, int phase) {
    return round( 1023 * 2 * abs(round( ( (float) ms+phase)/period)-( ( (float) ms+phase)/ period)) );    
}

void Fader::fade_to_rainbow(unsigned long ms) {
    float factor = 0.05; // increase per millisecond
    int err = 0;
    for (int h = 0;h<12;h++) {
        int buf = (values[h]-target_values[h]);
        if (buf < 0) values[h] = values[h] + factor*ms;
        if (buf > 0) values[h] = values[h] - factor*ms;
        err += abs(buf); 
    }    
    if (err < 40) {
        state = RAINBOW;
    }
    start = millis();
}

void Fader::start_rainbow() {
    state = FADE_TO_RAINBOW;
    int red = triangle_function(0,period,0);
    int green = triangle_function(0,period,phase_green);
    int blue = triangle_function(0,period,phase_blue);
    target_values[0] = red;
    target_values[1] = green;
    target_values[2] = 0;
    
    target_values[3] = 0;
    target_values[4] = green;
    target_values[5] = blue;
    
    target_values[6] = red;
    target_values[7] = 0;
    target_values[8] = blue;
    
    target_values[9] = red;
    target_values[10] = green;
    target_values[11] = blue;
    start = millis();
}

void Fader::rainbow(unsigned long ms) {
    //unsigned long ms= millis();

    /*red = floor( 712+311 * (double)  cos(2*PI/period*ms) );
    green = floor( 712+311 * (double) cos(2*PI/period*(phase_green-ms)));
    blue = floor( 712+311 * (double) cos(2*PI/period*(phase_blue-ms)));*/
    int red = triangle_function(ms,period,0);
    int green = triangle_function(ms,period,phase_green);
    int blue = triangle_function(ms,period,phase_blue);
    
    values[0] = red;
    values[1] = green;
    values[2] = 0;
    
    values[3] = 0;
    values[4] = green;
    values[5] = blue;
    
    values[6] = red;
    values[7] = 0;
    values[8] = blue;
    
    values[9] = red;
    values[10] = green;
    values[11] = blue;
}
