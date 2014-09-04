/* 
 * File:   Switch.cpp
 * Author: sei
 * 
 * Created on 25. August 2014, 21:01
 */

#include "Switch.h"

Switch::Switch(int switch_pin) {
    this->switch_pin = switch_pin;
    switchState = false;
    lastswitchState = false;
    changed = false;  
    filter = 0;
}

void Switch::init() {
    // setup button pin, set as an input
    pinMode(switch_pin, INPUT); // enable pullup
    //digitalWrite(switch_pin, HIGH);  
}

boolean Switch::was_switched() {
    boolean buf = changed;
    changed = false;
    return (buf);
}

boolean Switch::is_on() {
    return switchState;
}

void Switch::updateSwitch() {
        
    filter = filter - (filter>>4) + 16*(digitalRead(switch_pin));
    filter %= 257;
    
    //switchState = filter >> 8;
    if (filter > 144) switchState = true;
    else if (filter < 112) switchState = false;
    
    
    if (lastswitchState xor switchState) { 
        changed = true;
        lastswitchState = switchState;
    }
}
