/* 
 * File:   BouncyButton.h
 * Author: sei
 *
 * Created on 28. August 2014, 19:17
 */

#ifndef BOUNCYBUTTON_H
#define	BOUNCYBUTTON_H

#include <Button.h>

class BouncyButton : Button {
public:
    BouncyButton(int button, boolean pullup = false);
    
    void updateButton();
    
    boolean isPressed();
    boolean isReleased();

private:
    int filter;
};

#endif	/* BOUNCYBUTTON_H */

