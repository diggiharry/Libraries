/* 
 * File:   Switch.h
 * Author: sei
 *
 * Created on 25. August 2014, 21:01
 */

#ifndef SWITCH_H
#define	SWITCH_H

#include <Arduino.h>

class Switch {
public:
    Switch(int switch_pin);
    
    void init();
    
    void updateSwitch();
    
    boolean was_switched();
    boolean is_on();

protected:
    boolean switchState;
    boolean lastswitchState;
    
private:
    int switch_pin;
    int filter;
    boolean changed;

};

#endif	/* SWITCH_H */

