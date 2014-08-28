#include "UI.h"

/*
 * Constructor
 */
UI::UI(Encoder *encoder,Fader *fader, U8G_CLASS *u8g, SoundManager *sound, RTC_clock *due_clock, Alarm *alarm) 
{   
    phase_green = 500;
    phase_blue = 1000;
    period = 50000;

    lux = 0;

    enc = encoder;
        
    fade = fader;
    
    this->u8g = u8g;

    this->sound = sound;
    
    this->alarm = alarm;
    
    this->due_clock = due_clock;
       
    clockface = new Clock_Face(enc, u8g, alarm, due_clock); 
    clockface->claim_draw(); 
    clockface->claim_input();
    
    // create Setup Menu       
    LinkedList<String*> labels = LinkedList<String*>();
    labels.add(new String("Set Alarm"));
    labels.add(new String("Set Lights"));
    labels.add(new String("Settings"));
    labels.add(new String("Done"));
    setup = new Menu(clockface,&labels);
    
    // create Settings Menu       
    labels = LinkedList<String*>();
    labels.add(new String("Set Clock"));
    labels.add(new String("Set Sound"));
    labels.add(new String("Set Background"));
    labels.add(new String("Done"));
    settings = new Menu(clockface,&labels);
    
    // create Light Menu       
    labels = LinkedList<String*>();
    labels.add(new String("Single Color"));
    labels.add(new String("Colorwave"));
    labels.add(new String("Rainbow"));
    labels.add(new String("Done"));
    lightm = new Menu(clockface,&labels);
         
    // Create Special Menus
    alarmm = new Alarm_Menu(clockface,alarm);
    singlecolorm = new SingleColor_Menu(clockface,fader);
    rainbowm = new Rainbow_Menu(clockface,fader);
    colorwavem = new Colorwave_Menu(clockface,fader);
    soundm = new Sound_Menu(clockface,sound);
    clockm = new Clock_Menu(clockface, due_clock, &ext_clock);
    backgroundm = new Background_Menu(clockface);
    
    // Set targets
    clockface->set_target(setup);
    
    setup->add_target(0,alarmm);
    setup->add_target(1,lightm);
    setup->add_target(2,settings);
    setup->add_target(3,clockface);

    settings->add_target(0,clockm);
    settings->add_target(1,soundm);
    settings->add_target(2,backgroundm);
    settings->add_target(3,clockface);  
    
    lightm->add_target(0,singlecolorm);
    lightm->add_target(1,colorwavem);
    lightm->add_target(2,rainbowm);
    lightm->add_target(3,clockface);
  
}

/*
 * function init()
 *
 * should be called in setup(), initializes all stuff and sets u8g parameters
 */
void UI::init() {
            
        due_clock->init();
        
        ext_clock.getTime(); 
        
        due_clock->set_time(ext_clock.hour, ext_clock.minute, ext_clock.second);

	TSL2561.init();    
}

void UI::getTime() {
	// get time from DS1307
	//clock.getTime();
}

void UI::getLux() {
    // get LUX from Digital_Light_TSL2561
    TSL2561.getLux();
    lux = TSL2561.calculateLux(0,0,1);
}

/*
 * function draw()
 *
 * draw() chooses what is drawn on the display, depending on ui_state
 * should be called in loop(), or with a timer
 */
void UI::draw(void) {
    // picture loop
    u8g->firstPage();  
    do {             
        Widget::is_drawn->draw();
    } while( u8g->nextPage() ); 
    //cycleRBG(millis());
}

void UI::input() {
        Widget::has_input->input();
}

void UI::check_alarm() {
    alarm->check();
}