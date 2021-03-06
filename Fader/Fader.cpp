#include "Fader.h"

unsigned int LED_values[12] = {0,0,0, 0,0,0, 0,0,0, 0,0,0};
ShiftBar sb(4,LED_values);

Fader::Fader() {
    state = IDLE;
    prev_millis = 0;
    dur = 3000;
    start = 0;
    target_state = IDLE;  
    count = -1;
    section_duration = 0;
    
    rainbow_period = 500;
    rainbow_phase1 = 100;
    rainbow_phase2 = 200;
            
    cw_period = 15000;
    
    for (int h = 0;h<12;h++) {
        singlecolor_values[h] = 512;
    }      
    last_effect = FADE_TO_COLOR;
    //last_effect = COLORWAVE;
}

void Fader::init() {
    sb.init();
    sb.update();
}

boolean Fader::is_idle() {
    if (state == IDLE) return true;
    return false;
}

void Fader::start_last_effect() {
    switch(last_effect) {
        case  FADE_TO_COLOR:
            start_fade_to_color(singlecolor_values, 3000);
            break;
        case  RAINBOW:
            start_rainbow(rainbow_period);
            break;
        case  COLORWAVE:
            start_colorwave(cw_period);
            break;                
    }
}

void Fader::update() {
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
            case    SUNRISE:
                    sunrise();
                    break;
            case    COLORWAVE:
                    colorwave();
                    break;                    
        }
    
    for (int h = 0;h<4;h++) {
          sb.set(h,floor(values[h*3]),floor(values[h*3+1]),floor(values[h*3+2]));  
    }    
    sb.update();
    Serial.println(last_effect);
}

void Fader::set_color(int colors[12]) {
    for (int h = 0;h<12;h++) {
        values[h] = colors[h];
    }  
    state = IDLE;
}

void Fader::set_all(int red, int green, int blue) {
    for (int h = 0;h<4;h++) {
        values[h*3] = red;
        values[h*3+1] = green;
        values[h*3+2] =  blue;
    }
    state = IDLE;
}

void Fader::set_all(float hue, float lightness) {
    float rgb[3] = {0,0,0};
    hslToRgb(hue, 0, lightness, rgb);  
    for (int h = 0;h<4;h++) {
        values[h*3] = rgb[0];
        values[h*3+1] = rgb[1];
        values[h*3+2] =  rgb[2];
    }
    state = IDLE;
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

void Fader::start_fade_to_color(int colors[12], unsigned long duration, boolean register_last_effect = true) {   
    if (register_last_effect) last_effect = FADE_TO_COLOR;
    for (int h = 0;h<12;h++) {
        target_values[h] =  (float) colors[h];
        if (register_last_effect) singlecolor_values[h] = colors[h];
        slopes[h] = ( target_values[h] - values[h] ) / duration  ;
    }
    dur = duration;
    target_state = IDLE;
    state = FADE_TO_COLOR;
    start = millis();
    prev_millis = start; 
    fade_to_color();    
}

void Fader::fade_out() {
    int colors[12] = {  0,0,0, 0,0,0, 0,0,0, 0,0,0,}; 
    start_fade_to_color(colors, 300, false);
}

void Fader::fade_out(int duration) {
    int colors[12] = {  0,0,0, 0,0,0, 0,0,0, 0,0,0,}; 
    start_fade_to_color(colors, duration, false);
}

float Fader::sawtooth_function(unsigned long ms,unsigned int period, int phase) {
    return ( (float) ms+phase)/period - floor(( (float) ms+phase)/period);    
}

float Fader::triangle_function(unsigned long ms,unsigned int period, int phase) {
    return 2 * abs(round( ( (float) ms+phase)/period)-( ( (float) ms+phase)/ period)) ;    
}

void Fader::start_rainbow(int period) {
    last_effect = RAINBOW; 

    rainbow_period = period;
    
    float rgb[] = {0,0,0};
    int start_values[12]; 
    float hue = sawtooth_function(0,rainbow_period,0);
    hsvToRgb(hue,1,1,rgb);
    for (int h = 0;h<4;h++) {
        start_values[h*3] = (int) rgb[0];
        start_values[h*3+1] = (int) rgb[1];
        start_values[h*3+2] = (int) rgb[2];        
    }
 
    start_fade_to_color(start_values, 3000, false);
    target_state = RAINBOW;
}

void Fader::rainbow() {
    float rgb[] = {0,0,0};
    unsigned long diff_millis = millis() - start - 3000;
    float hue = sawtooth_function(diff_millis,rainbow_period,0);
    hsvToRgb(hue,1,1,rgb);
    for (int h = 0;h<4;h++) {
        values[h*3] =  rgb[0];
        values[h*3+1] =  rgb[1];
        values[h*3+2] =  rgb[2];
    }    
}

void Fader::start_sunrise(unsigned long duration) {
    section_duration =  duration / 4 ;
    count = 0;
    state = SUNRISE; 
    set_all(0,0,0);
    sunrise();
}

void Fader::sunrise() {
    int colors[12] = {  sunrise_col[count*3],sunrise_col[count*3+1],sunrise_col[count*3+2], 
                        sunrise_col[count*3],sunrise_col[count*3+1],sunrise_col[count*3+2],
                        sunrise_col[count*3],sunrise_col[count*3+1],sunrise_col[count*3+2],
                        sunrise_col[count*3],sunrise_col[count*3+1],sunrise_col[count*3+2] };
    /*for (int h = 0;h<4;h++) {
        colors[h] =  sunrise_col[count];
        colors[h+1] =  sunrise_col[count+1];
        colors[h+2] =  sunrise_col[count+2];
    }*/ 
    start_fade_to_color(colors, section_duration);   
    if (count < 4) target_state = SUNRISE;
    count++;
}

void Fader::start_colorwave(int period) {
    last_effect = COLORWAVE; 

    cw_period = period;
    
    float buf = 1;
    float hue = 0;
    for (int h = 0;h<4;h++) {
        //hue = triangle_function(0,cw_period,h*( (float) cw_period/2));
        hue = sawtooth_function(0,cw_period,h*( (float) cw_period/4));
        hsvToRgb(hue,buf,buf,target_values+h*3);
    }
    int duration = 2000;
    for (int h = 0;h<12;h++) {
        slopes[h] = ( target_values[h] - values[h] ) / duration  ;
    }
    dur = duration;
    target_state = COLORWAVE;
    state = FADE_TO_COLOR;
    start = millis();
    prev_millis = start; 
    fade_to_color();   
}

void Fader::colorwave() {
    unsigned long diff_millis = millis() - start - 2000;
    float buf = 1;
    float hue = 0;
    for (int h = 0;h<4;h++) {
        //hue = triangle_function(diff_millis,cw_period,h*( (float) cw_period/10 ));
        hue = sawtooth_function(diff_millis,cw_period,h*( (float) cw_period/4 ));
        hsvToRgb(hue,buf,buf,values+h*3);
    }
}

/**
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
* returns r, g, and b in the set [0, 1023].
*
* @param Number h The hue
* @param Number s The saturation
* @param Number v The value
* @return Array The RGB representation
*/
void Fader::hsvToRgb(float h, float s, float v, float rgb[]) {
    float r, g, b;
    int i = int(h * 6);
    float f = h * 6 - i;
    float p = v * (1 - s);
    float q = v * (1 - f * s);
    float t = v * (1 - (1 - f) * s);
    switch(i % 6) {
        case 0: r = v, g = t, b = p; break;
        case 1: r = q, g = v, b = p; break;
        case 2: r = p, g = v, b = t; break;
        case 3: r = p, g = q, b = v; break;
        case 4: r = t, g = p, b = v; break;
        case 5: r = v, g = p, b = q; break;
    }
    rgb[0] = r * 1023;
    rgb[1] = g * 1023;
    rgb[2] = b * 1023;
}


/**
* Converts an HSL color value to RGB. Conversion formula
* adapted from http://en.wikipedia.org/wiki/HSL_color_space.
* Assumes h, s, and l are contained in the set [0, 1] and
* returns r, g, and b in the set [0, 255].
*
* @param Number h The hue
* @param Number s The saturation
* @param Number l The lightness
* @return Array The RGB representation
*/
void Fader::hslToRgb(float h, float s, float l, float rgb[]) {
    float r, g, b;
    if (s == 0) {
        r = g = b = l; // achromatic
    } else {
        float q = l < 0.5 ? l * (1 + s) : l + s - l * s;
        float p = 2 * l - q;
        r = hue2rgb(p, q, h + 1/3);
        g = hue2rgb(p, q, h);
        b = hue2rgb(p, q, h - 1/3);
    }
    rgb[0] = r * 1023;
    rgb[1] = g * 1023;
    rgb[2] = b * 1023;
}

float Fader::hue2rgb(float p, float q, float t) {
    if(t < 0) t += 1;
    if(t > 1) t -= 1;
    if(t < 1/6) return p + (q - p) * 6 * t;
    if(t < 1/2) return q;
    if(t < 2/3) return p + (q - p) * (2/3 - t) * 6;
    return p;
}