/*Encoder.h
Library for Rotary Encoder by sei
Based on :
Copyright 2011 Ben Buxton. Licenced under the GNU GPL Version 3.
Contact: bb@cactii.net
Quick implementation of rotary encoder routine.
More info: http://www.buxtronix.net/2011/10/rotary-encoders-done-properly.html
*/

#include "Encoder.h"


Encoder::Encoder(int A_pin, int B_pin,int button_pin,int min_value, int max_value) {
	button = button_pin;
	A = A_pin;
	B = B_pin;
	encoder_value = min_value;
        oversample = 7;
      	encoder_oversample_value = 0;
	A_old = 0;
	B_new = 0;
	max = max_value;
	min = min_value;
	buttonState = false;
	lastbuttonState = false;
}

void Encoder::setBounds(int min_value, int max_value, int oversampling) {
	encoder_value = min_value;
	min = min_value;
	max = max_value;
        oversample = oversampling;
      	encoder_oversample_value = 0;
        
}

boolean Encoder::isPressed() {
	return (buttonState);
}

boolean Encoder::isReleased() {
	if (buttonState  == false) {
		if (lastbuttonState == true) {
			lastbuttonState = false;
			return true;
		}
	}
	return false;
}

void Encoder::Init() {
	  // Setup encoder pins, they should both be set as inputs
	  // and internally pulled-up
	  pinMode(A, INPUT);
	  digitalWrite(A, HIGH);
	  pinMode(B, INPUT);
	  digitalWrite(B, HIGH);

	  // setup button pin, set as an input, no pulled up
	  pinMode(button, INPUT);
	  digitalWrite(button, HIGH);  // disable internal pull-up

}

inline void Encoder::check_value() {
    if (encoder_oversample_value >= oversample) {
        encoder_value++;
        encoder_oversample_value = 0;
    }
    
    if (encoder_oversample_value <= -oversample) {
        encoder_value--;
        encoder_oversample_value = 0;
    }    
    
    if (encoder_value > max) encoder_value = min;
    if (encoder_value < min) encoder_value = max;  
}

void Encoder::updateEncoder_A(){
	B_new^A_old ? encoder_oversample_value++:encoder_oversample_value--;
	A_old=digitalRead(A);
        check_value();        
}

void Encoder::updateEncoder_B(){
	B_new=digitalRead(B);
	B_new^A_old ? encoder_oversample_value++:encoder_oversample_value--;
        check_value();
}

void Encoder::updateButton() {
	lastbuttonState = buttonState;
	buttonState = !digitalRead(button);
}

int Encoder::getValue() {
	return encoder_value;
}

void Encoder::setValue(int Value) {
	if (Value <= (max))
		if (Value >= (min))
			encoder_value = Value;
}
