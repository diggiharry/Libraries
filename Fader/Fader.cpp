#include "Fader.h"

unsigned int LED_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
ShiftBar sb(4,LED_values);

Fader::Fader() {
    state = IDLE;
    prev_millis = 0;
    dur = 0;
    start = 0;
    target_state = IDLE;    
}

void Fader::init() {
    sb.init();
    sb.update();
}

void Fader::update(unsigned long ms) {
    switch(state)
         {
            case    IDLE:
                    //...
                    break;
            case    RAINBOW:
                    rainbow();
                    break;
            case    FADE_TO_COLOR:
                    fade_to_color();
                    break;         
        }
    
    for (int h = 0;h<4;h++) {
          sb.set(h,floor(values[h*3]),floor(values[h*3+1]),floor(values[h*3+2]));  
    }
    
    sb.update();
}

void Fader::fade_to_color() {
    unsigned long curr_millis = millis();
    float diff_millis = curr_millis - prev_millis;
    prev_millis = curr_millis;

    for (int h = 0;h<12;h++) {
        values[h] = values[h] + slopes[h] * diff_millis;
     }   
    if (curr_millis >= (start + dur ) ) {
        state = target_state;
        for (int h = 0;h<12;h++) {
            values[h] = target_values[h];
        }
    }   
}

void Fader::start_fade_to_color(int colors[12], unsigned long duration) {   
    for (int h = 0;h<12;h++) {
        target_values[h] =  (float) colors[h];
        slopes[h] = ( target_values[h] - values[h] ) / duration  ;
    }
    dur = duration;
    target_state = IDLE;
    state = FADE_TO_COLOR;
    start = millis();
    prev_millis = start; 
}

int Fader::triangle_function(unsigned long ms,unsigned int period, int phase) {
    return 1023 * 2 * abs(round( ( (float) ms+phase)/period)-( ( (float) ms+phase)/ period)) ;    
}

void Fader::start_rainbow() {
    int red = triangle_function(0,period,0);
    int green = triangle_function(0,period,phase_green);
    int blue = triangle_function(0,period,phase_blue);
    int start_values[12] = { red,green,0, 0,green,blue, red,0,blue, red,green,blue }; 
    start_fade_to_color(start_values,3000);
    target_state = RAINBOW;
    //start = millis();
}

void Fader::rainbow() {
    unsigned long diff_millis = millis() - start - 3000;
    Serial.println(diff_millis);
    /*red = floor( 712+311 * (double)  cos(2*PI/period*ms) );
    green = floor( 712+311 * (double) cos(2*PI/period*(phase_green-ms)));
    blue = floor( 712+311 * (double) cos(2*PI/period*(phase_blue-ms)));*/
    float red = triangle_function(diff_millis,period,0);
    float green = triangle_function(diff_millis,period,phase_green);
    float blue = triangle_function(diff_millis,period,phase_blue);

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

/**
* 
* RGBConverter.h - Arduino library for converting between RGB, HSV and HSL
*
* Ported from the Javascript at http://mjijackson.com/2008/02/rgb-to-hsl-and-rgb-to-hsv-color-model-conversion-algorithms-in-javascript
* The hard work was Michael's, all the bugs are mine.
*
* Robert Atkins, December 2010 (ratkins_at_fastmail_dot_fm).
*
* https://github.com/ratkins/RGBConverter
* Converts an RGB color value to HSV. Conversion formula
* adapted from http://en.wikipedia.org/wiki/HSV_color_space.
* Assumes r, g, and b are contained in the set [0, 255] and
* returns h, s, and v in the set [0, 1].
*
* @param Number r The red color value
* @param Number g The green color value
* @param Number b The blue color value
* @return Array The HSV representation
*/
/*void Fader::rgbToHsv(byte r, byte g, byte b, double hsv[]) {
    double rd = (double) r/255;
    double gd = (double) g/255;
    double bd = (double) b/255;
    double max = threeway_max(rd, gd, bd), min = threeway_min(rd, gd, bd);
    double h, s, v = max;
    double d = max - min;
    s = max == 0 ? 0 : d / max;
    if (max == min) {
     h = 0; // achromatic
    } else {
        if (max == rd) {
            h = (gd - bd) / d + (gd < bd ? 6 : 0);
        } else if (max == gd) {
            h = (bd - rd) / d + 2;
        } else if (max == bd) {
            h = (rd - gd) / d + 4;
        }
        h /= 6;
    }
    hsv[0] = h;
    hsv[1] = s;
    hsv[2] = v;
}*/


/**
* 
* RGBConverter.h - Arduino library for converting between RGB, HSV and HSL
*
* Ported from the Javascript at http://mjijackson.com/2008/02/rgb-to-hsl-and-rgb-to-hsv-color-model-conversion-algorithms-in-javascript
* The hard work was Michael's, all the bugs are mine.
*
* Robert Atkins, December 2010 (ratkins_at_fastmail_dot_fm).

* Converts an HSV color value to RGB. Conversion formula
* adapted from http://en.wikipedia.org/wiki/HSV_color_space.
* Assumes h, s, and v are contained in the set [0, 1] and
* returns r, g, and b in the set [0, 255].
*
* @param Number h The hue
* @param Number s The saturation
* @param Number v The value
* @return Array The RGB representation
*/
/*void Fader::hsvToRgb(double h, double s, double v, byte rgb[]) {
    double r, g, b;
    int i = int(h * 6);
    double f = h * 6 - i;
    double p = v * (1 - s);
    double q = v * (1 - f * s);
    double t = v * (1 - (1 - f) * s);
    switch(i % 6) {
        case 0: r = v, g = t, b = p; break;
        case 1: r = q, g = v, b = p; break;
        case 2: r = p, g = v, b = t; break;
        case 3: r = p, g = q, b = v; break;
        case 4: r = t, g = p, b = v; break;
        case 5: r = v, g = p, b = q; break;
    }
    rgb[0] = r * 255;
    rgb[1] = g * 255;
    rgb[2] = b * 255;
}*/