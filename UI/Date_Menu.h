/* 
 * File:   Date_Menu.h
 * Author: sei
 *
 * Created on 29. August 2014, 23:39
 */

#ifndef DATE_MENU_H
#define	DATE_MENU_H

#include <Widget.h>
#include <InputBox.h>
#include <MenuItem.h>
#include <DS1307.h>
#include <rtc_clock.h>

class Date_Menu : public Widget {
public:
    Date_Menu(Widget *parent, RTC_clock* due_clock, DS1307* ext_clock);
    void draw();
    void input();
    void claim_input();
    
private:
    RTC_clock* due_clock;        
    DS1307* ext_clock;
    
    InputBox *daybox;
    InputBox *monthbox;
    InputBox *yearbox;
    MenuItem *done;    
    
    boolean initialize;
    
    unsigned int day,month,year;
    
    int active_item;     
};

#endif	/* DATE_MENU_H */

