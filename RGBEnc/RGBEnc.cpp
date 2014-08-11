/*
RGBEnc.h
Library for sparkfun RBG Rotary Encoder by sei
Based on :
Copyright 2011 Ben Buxton. Licenced under the GNU GPL Version 3.
Contact: bb@cactii.net
Quick implementation of rotary encoder routine.
More info: http://www.buxtronix.net/2011/10/rotary-encoders-done-properly.html
*/

#include "RGBEnc.h"


RGBEnc::RGBEnc(int red_pin, int green_pin, int blue_pin, int button_pin, int A_pin, int B_pin,int min_value, int max_value) {
	red = red_pin;
	green = green_pin;
	blue = blue_pin;
	button = button_pin;
	A = A_pin;
	B = B_pin;
	encoder_value = min_value;
	last_ecnoder_value = 0;
	max = max_value;
	min = min_value;
	buttonState = false;
	lastbuttonState = false;
}

void RGBEnc::setBounds(int min_value, int max_value) {
	encoder_value = min_value;
	min = min_value;
	max = max_value;
}

boolean RGBEnc::isPressed() {
	return (buttonState);
}

boolean RGBEnc::isReleased() {
	if (buttonState  == false) {
		if (lastbuttonState == true) {
			lastbuttonState = false;
			return true;
		}
	}
	return false;
}

void RGBEnc::Init() {
	  // Setup encoder pins, they should both be set as inputs
	  // and internally pulled-up
	  pinMode(A, INPUT);
	  digitalWrite(A, HIGH);
	  pinMode(B, INPUT);
	  digitalWrite(B, HIGH);

	  // setup button pin, set as an input, no pulled up
	  pinMode(button, INPUT);
	  digitalWrite(button, LOW);  // disable internal pull-up

	  // Setup led pins as outputs, and write their intial value.
	  // initial value is defined by the ledValue global variable
	  pinMode(red, OUTPUT);
	  analogWrite(red, 0);  // Red on
	  //digitalWrite(red, LOW);  // Red on
	  pinMode(green, OUTPUT);
	  analogWrite(green, 0);  // Green on
	  //digitalWrite(green, LOW);  // Red on
	  pinMode(blue, OUTPUT);
	  analogWrite(blue, 0);  // Blue on
	  //digitalWrite(blue, LOW);  // Red on
	  int val;

	  val = 0;
	  if( digitalRead(A) )
	    val = 3;
	  if( digitalRead(B) )
	    val ^= 1;                   // convert gray to binary
	  last_ecnoder_value = val;                   // power on state
	  enc_delta = 0;
}

void RGBEnc::updateEncoder(){
	int val = 0;
	int diff = 0;
	//enc_delta = 0;
	val = 0;
	if( digitalRead(A) )
		val = 3;
	if( digitalRead(B) )
		val ^= 1;                   // convert gray to binary
	diff = last_ecnoder_value - val;                // difference last - new
	if( diff & 1 ){               // bit 0 = value (1)
		last_ecnoder_value = val;                 // store new as next last_ecnoder_value
		enc_delta += (diff & 2) - 1;        // bit 1 = direction (+/-)
	}
	val = enc_delta;
	enc_delta = val & 3;
	encoder_value += val >> 2;

	if (encoder_value > max) encoder_value = min;
	if (encoder_value < min) encoder_value = max;
}

void RGBEnc::updateButton() {
	lastbuttonState = buttonState;
	buttonState = digitalRead(button);
}

int RGBEnc::getValue() {
	return encoder_value;
}

void RGBEnc::setValue(int Value) {
	if (Value <= (max))
		if (Value >= (min))
			encoder_value = Value;
}

void RGBEnc::setColor(unsigned char red,unsigned char green,unsigned char blue) {
	  analogWrite(this->red, red);  // Red on
	  analogWrite(this->green, green);  // Green on
	  analogWrite(this->blue, blue);  // Blue on

}
