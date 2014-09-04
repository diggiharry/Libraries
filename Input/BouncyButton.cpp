/* 
 * File:   BouncyButton.cpp
 * Author: sei
 * 
 * Created on 28. August 2014, 19:17
 */

#include "BouncyButton.h"

BouncyButton::BouncyButton(int button, boolean pullup = false) 
    : Button(button, pullup)
{
    filter = 0;
}


