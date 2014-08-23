/* 
 * File:   Base.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 01:58
 */

#include "Base.h"
#include <Widget.h>

Base::Base() {
}

void Base::draw() {
    is_drawn->draw();
}

void Base::input() {
    has_input->input();
}