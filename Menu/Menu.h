/* 
 * File:   Menu.h
 * Author: sei
 *
 * Created on 14. August 2014, 22:02
 */

#ifndef MENU_H
#define	MENU_H

#include "Encoder.h"
#include <U8glib.h>
#include <u8g.h>

class Menu {

    public:
        Menu(Encoder *encoder, U8GLIB *u8glib,int *parent_state);

        virtual void draw();
        virtual void input();

        static boolean blink;
        static boolean blinkfast;

        //function has to be called in main programm at a period of 500ms
        //it is used to let stuff on the display blink
        static void switch_blink();
        //function has to be called in main programm at a period of 200ms
        //it is used to let stuff on the display blink fast
        static void switch_blinkfast();
        
    protected:
        Encoder *enc;
        U8GLIB *u8g; 
        int *p_state;
};

      
      

#endif	/* MENU_H */

