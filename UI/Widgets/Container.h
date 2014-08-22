/* 
 * File:   Container.h
 * Author: sei
 *
 * Created on 21. August 2014, 20:51
 */

#ifndef CONTAINER_H
#define	CONTAINER_H

#include <Widget.h>
#include <LinkedList.h>

class Container : public Widget {
public:
    Container(Encoder *encoder, U8G_CLASS *u8glib);
    Container(Widget *parent);

    
    void draw();
    void input();
    
protected:
    LinkedList<Widget*> children; 
    
};

#endif	/* CONTAINER_H */

