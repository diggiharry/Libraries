/*Encoder.h
Library for Rotary Encoder by sei
Based on :
Copyright 2011 Ben Buxton. Licenced under the GNU GPL Version 3.
Contact: bb@cactii.net
Quick implementation of rotary encoder routine.
More info: http://www.buxtronix.net/2011/10/rotary-encoders-done-properly.html
*/

#include "Encoder.h"


Encoder::Encoder(int A_pin, int B_pin,int button_pin) 
    : Button(button_pin)
{
	A = A_pin;
	B = B_pin;
	encoder_value = 0;
        undersample = 7;
	A_old = 0;
	B_new = 0;
	max = 2048;
	min = -2048;
}

void Encoder::setUndersample(int undersample) {
        this->undersample = undersample;
      	if (undersample < 1) undersample = 1;
        encoder_value = 0;        
}

/* Function getDirection
 * 
 * returns the direction the Encoder was turned, 1 for right, -1 for left 
 * and 0 if it wasn't turned
 * 
 */
int Encoder::getDirection() {
    int dir = 0;
    if (encoder_value >= undersample) {
        dir = (encoder_value/undersample);
        encoder_value = 0;
        //dir = 1; 
    } else if (encoder_value <= -undersample) {
        dir = (encoder_value/undersample);        
        encoder_value = 0;
        //dir = -1;
    }     
    return dir;
}

void Encoder::Init() {
    Button::init();
    // Setup encoder pins, they should both be set as inputs
    // and internally pulled-up
    pinMode(A, INPUT);
    digitalWrite(A, HIGH);
    pinMode(B, INPUT);
    digitalWrite(B, HIGH);
}

inline void Encoder::check_value() {
    if (encoder_value > max) encoder_value = min;
    if (encoder_value < min) encoder_value = max;  
}

void Encoder::updateEncoder_A() {
	B_new^A_old ? encoder_value++:encoder_value--;
	A_old=digitalRead(A);
        check_value();        
}

void Encoder::updateEncoder_B(){
	B_new=digitalRead(B);
	B_new^A_old ? encoder_value++:encoder_value--;
        check_value();
}