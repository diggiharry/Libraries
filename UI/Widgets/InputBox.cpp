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
    this->height = 12;
}

void InputBox::claim_input() 
{
    Widget::claim_input();
    
    int diff = max - min;
    if (diff <= 32) {
        enc.setUndersample( 32 / diff );
    } else if (diff <= 100) {
        enc.setUndersample(2);
    } else {
        enc.setUndersample(1);      
    }
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
    
    if (enc->isReleased()) {
        parent->claim_input(); 
        this->input_claimed = false;
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
    
    u8g->setPrintPos(x+(128-offset),y);
    
    u8g->print(value);    
}

int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}