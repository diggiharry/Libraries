/* 
 * File:   Button.cpp
 * Author: sei
 * 
 * Created on 25. August 2014, 20:55
 */

#include "Button.h"

Button::Button(int button, boolean pullup = false) {
    this->button = button;
    buttonState = false;
    lastbuttonState = false;
    toggle = false;
    this->pullup = pullup;
}

void Button::init() {
    	  // setup button pin, set as an input, no pulled up
	  if (pullup) {
                pinMode(button, INPUT_PULLUP);
                //digitalWrite(button, HIGH);             
          }
          else {
            pinMode(button, INPUT);
            digitalWrite(button, HIGH);  // disable internal pull-up            
          }
}

boolean Button::isPressed() {
	return (buttonState);
}

boolean Button::isReleased() {
	if (buttonState  == false) {
		if (lastbuttonState == true) {
			lastbuttonState = false;
                        toggle = !toggle;
			return true;
		}
	}
	return false;
}

boolean Button::is_on() {
    return toggle;
}

void Button::updateButton() {
	lastbuttonState = buttonState;
	buttonState = !digitalRead(button);
}

