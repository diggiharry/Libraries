/* 
 * File:   Menu.cpp
 * Author: sei
 * 
 * Created on 21. August 2014, 23:30
 */

#include "Menu.h"

Menu::Menu(Widget *parent, LinkedList<String*> *labels) 
    : Widget(parent) 
{
    children = LinkedList<MenuItem*>();
    x = 0;
    y = 5;
    MenuItem *item;
    for (int i = 0; i<labels->size(); i++) {
        item = new MenuItem(*labels->get(i), this); 
        item->set_pos(x+20,y+10+i*(item->get_height()+4)-2);
        children.add(item);
        item = 0;
    }    
    num_items = children.size();
    active_item = 0;    
}

void Menu::add_target(int item, Widget *target) {
    MenuItem *buf = children.get(item);
    buf->set_target(target);
}

void Menu::claim_input() {
    Widget::claim_input();
    enc->setUndersample(10);
    active_item = 0;
}

void Menu::input(void) {
    
    active_item += enc->getDirection();
    if (active_item < 0) active_item = num_items-1;
    active_item %= num_items;
  
    children.get(active_item)->input();        
}

void Menu::draw(void) {
    for (int i = 0; i<num_items; i++) {
        children.get(i)->draw();
    } 
    u8g->setFont(u8g_font_cu12_67_75);
    u8g->setPrintPos(5,children.get(active_item)->get_y()+3);            
    u8g->print( (char) 104 );
}

