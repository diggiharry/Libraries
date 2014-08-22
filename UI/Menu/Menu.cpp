/* 
 * File:   Menu.cpp
 * Author: sei
 * 
 * Created on 21. August 2014, 23:30
 */

#include "Menu.h"

Menu::Menu(Widget *parent, LinkedList<String*> labels) 
    : Container(parent) 
{
    MenuItem item;
    for (int i = 0; i<labels.size(); i++) {
        item = new MenuItem(labels.get(i),this); 
        item.set_pos(x+10,y+10+i*(item.get_height()+4)-2);
        children.add(item);
    }    
    num_items = children.set();
    active_item = 0;    
}

void Menu::add_action(int item, Widget *target) {
    MenuItem item = children.get(item);
    item.set_target(target);
}

void Menu::input(void) {
    
    active_item += enc.getDirection();
    
    active_item %= num_items;
  
    if (enc->isReleased()) {
        children.get(active_item)->input();        
    }
}

void Menu::draw(void) {
    if (visible)
    for (int i = 0; i<num_items; i++) {
        children.get(i)->draw();
        
        if (i == active_item) {
            u8g->setFont(u8g_font_symb14); 
            u8g->setPrintPos(0,y+i*(children.get(i)->get_height()+4)-2);            
        }

    } 

}

