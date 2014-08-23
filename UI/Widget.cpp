/* 
 * File:   Widget.cpp
 * Author: sei
 * 
 * Created on 20. August 2014, 20:00
 */

#include "Widget.h"

static boolean Widget::blink;
static boolean  Widget::blinkfast;
static Widget *Widget::has_input;
static Widget *Widget::is_drawn;  
static int Widget::num_widgets;

Widget::Widget(Encoder *encoder,U8G_CLASS *u8glib) {
    this->enc = encoder;
    this->u8g = u8glib; 
    this->parent = this;   
    this->ID = 0;
    this->num_widgets = 0;
    init();
}

 Widget::Widget(Widget *parent) {
    this->parent = parent;
    this->enc = parent->enc;
    this->u8g = parent->u8g;
    this->num_widgets +=1;
    this->ID = num_widgets;
    init();
 }

void Widget::init() {
    //Widget::has_input = this;
    //Widget::is_drawn = this;
    x = 0;
    y = 0;
    width = 0;
    height = 0;   
}

void Widget::set_pos(int x, int y) {
    this->x = x;
    this->y = y;
}

int Widget::get_x() {
    return x;
}

int Widget::get_y() {
    return y;
} 

int Widget::get_height() {
    return height;
}

void Widget::claim_input() {
    Widget::has_input = this;
}   

void Widget::claim_draw() {
    Widget::is_drawn = this;
} 

void Widget::release_input(boolean pass_down = false) {
   if (pass_down) {
       if (! this == parent) {
           parent->release_input(true);       
       } else {
           parent->claim_input();
           parent->claim_draw();
       }
    } else parent->claim_input();
}  

static void Widget::switch_blink() {
    blink = !blink;
}

static void Widget::switch_blinkfast() {
    blinkfast = !blinkfast;
}

static String Widget::time2str(int hour,int minute) {
	String h;
	if (hour < 9) {
		h = String(hour);
		h = "0" + h;
	} else {
		h = String(hour);
	}
	String m;
	if (minute < 9) {
		m = String(minute);
		m = "0" + m;
	} else {
		m = String(minute);
	}
	return h+":"+m;
}

static String Widget::dec2str(int dec) {
	if (dec < 99) {
		String n;
		if (dec < 10) {
			n = String(dec);
			n = "0" + n;
		} else {
			n = String(dec);
		}
		return n;
	} else return String("na");
}

void Widget::draw() {

}

void Widget::input() {

}