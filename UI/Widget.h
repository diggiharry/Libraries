/* 
 * File:   Widget.h
 * Author: sei
 *
 * Created on 20. August 2014, 20:00
 */

#ifndef WIDGET_H
#define	WIDGET_H

#include "Encoder.h"
#include <U8glib.h>
#include <u8g.h>
#include <Arduino.h>
#include <LinkedList.h>

#define U8G_CLASS U8GLIB_LM6059_2X

class Widget {
public:
    Widget(Encoder *encoder,U8G_CLASS *u8glib);
    Widget(Widget *parent);
    
    virtual void draw();
    virtual void input();
    
    virtual void claim_input();
    void claim_draw();
    
    void release_input(boolean pass_down = false);   
        
    void set_pos(int x, int y);
    int get_x();
    int get_y();    
    
    int get_height();    
    
    //function has to be called in main programm at a period of 500ms
    //it is used to let stuff on the display blink
    static void switch_blink();
    //function has to be called in main programm at a period of 200ms
    //it is used to let stuff on the display blink fast
    static void switch_blinkfast();

    static boolean blink;
    static boolean blinkfast;    
    
    static Widget *has_input;
    static Widget *is_drawn;      

protected:
    Encoder *enc;
    U8G_CLASS *u8g; 
   
    Widget *parent;   
    
    int x,y;
    int height,width;
    
    static String time2str(int hour,int minute);
    static String dec2str(int dec);
    
    int ID;
    static int num_widgets;
    
private:
    void init();
};


#endif	/* WIDGET_H */

