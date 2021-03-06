/* 
 * File:   InputBox.cpp
 * Author: sei
 * 
 * Created on 20. August 2014, 20:01
 */

#include "InputBox.h"

InputBox::InputBox(Widget *parent, const String label, int min, int max, int startvalue)
    : Widget(parent) 
{
    this->label = label;
    this->min = min;
    this->max = max;
    this->value = startvalue;
    this->height = 10;
}

void InputBox::claim_input() 
{
    Widget::claim_input();
    
 /*   int diff = max - min;
    if (diff <= 32) {
        int u = 32 / diff;
        if (u < 1 ) u = 1;
        enc->setUndersample( u );
    } else if (diff <= 100) {
        enc->setUndersample(2);
    } else {
        enc->setUndersample(1);      
    }*/
    enc->setUndersample(3);      
}

void InputBox::set_value(int val) {
    value = val;
}

int InputBox::get_value() {
    return value;
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void InputBox::input(void) 
{
    value = value + enc->getDirection();
    //if (value < 0) value = max;
    //value %= (max+1);    
    if (value < min) value = min;
    if (value > max) value = max;
    
    if (enc->isReleased()) {
        release_input(); 
    }    
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void InputBox::draw(void) 
{    
    u8g->setPrintPos(x, y);
        
    u8g->setFont(u8g_font_6x10);
    
    u8g->print(label);    
    
    int offset = numDigits(value);
    
    u8g->setPrintPos(x+(100 -(offset*6)),y);
    
    u8g->print(value);    
}

static int InputBox::numDigits(int number)
{
    int digits = 0;
    if (number == 0) return 1;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}