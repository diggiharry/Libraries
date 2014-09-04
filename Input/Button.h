/* 
 * File:   Button.h
 * Author: sei
 *
 * Created on 25. August 2014, 20:55
 */

#ifndef BUTTON_H
#define	BUTTON_H

#include <Arduino.h>

class Button {
public:
    Button(int button, boolean pullup = false);
    
    void init();
    
    void updateButton();
    
    boolean isPressed();
    boolean isReleased();
    boolean is_on();
    
protected:
    boolean buttonState;
    boolean lastbuttonState;
    boolean toggle;
    boolean pullup;
    
private:
	int button;

};

#endif	/* BUTTON_H */

