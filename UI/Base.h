/* 
 * File:   Base.h
 * Author: sei
 *
 * Created on 23. August 2014, 01:58
 */

#ifndef BASE_H
#define	BASE_H

//#include <Widget.h>
class Widget;

typedef void (Widget::*draw)(void);
typedef void (Widget::*input)(void);

class Base {
public:
    Base();
    
    void draw();
    void input();

    Widget *has_input;
    Widget *is_drawn;
    
protected:

};

#endif	/* BASE_H */

