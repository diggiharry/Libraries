/* 
 * File:   Container.cpp
 * Author: sei
 * 
 * Created on 21. August 2014, 20:51
 */

#include "Container.h"

Container::Container(Encoder *encoder, U8G_CLASS *u8glib) 
    : Widget(encoder, u8glib) 
{
    children = LinkedList<Widget*>();
}

Container::Container(Widget *parent) 
    : Widget(parent) 
{
    children = LinkedList<Widget*>();
}

void Container::draw() {
    Widget *child;
    for (int i = 0; i < children.size(); i++){
        child = children.get(i);
        child->draw();        
    }        
}

void Container::input() {
    /*Widget *child;
    for (int i = 0; i < children.size(); i++){
        child = children.get(i);
        if (child->claims_input()) child->input();        
    }*/ 
}