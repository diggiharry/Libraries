/* 
 * File:   Menu.h
 * Author: sei
 *
 * Created on 21. August 2014, 23:30
 */

#ifndef MENU_H
#define	MENU_H

#include <Container.h>
#include <../Widgets/MenuItem.h>
#include <LinkedList.h>

class Menu : public Container {
public:
    Menu(Widget *parent, LinkedList<String*> labels);
    
    void draw();
    void input();
    
    void add_action(int item, Widget *target);
    
private:
    int num_items;
    int active_item; 
};

#endif	/* MENU_H */

