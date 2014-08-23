#include "UI.h"


// the LCD backlight is connected up to a pin so you can turn it on & off
#define BACKLIGHT_RED 5
#define BACKLIGHT_GREEN 6 
#define BACKLIGHT_BLUE 7

/*
 * Constructor
 */
UI::UI(Encoder *encoder,Fader *fader, U8G_CLASS *u8g) 
{
    dim = 255; // has to be between 26 and 255 !
    redVal = 255; // Variables to store the values to send to the pins
    greenVal = 255;   // Initial values are Red full, Green and Blue off
    blueVal = 255;

    phase_green = 500;
    phase_blue = 1000;
    period = 50000;

    pinMode(BACKLIGHT_RED,   OUTPUT);   // sets the pins as output
    pinMode(BACKLIGHT_GREEN, OUTPUT);
    pinMode(BACKLIGHT_BLUE,  OUTPUT);
   
    backlight = true;

    lux = 0;

    enc = encoder;
        
    fade = fader;
    
    //u8g = &U8G_CLASS(LCD_SCK, LCD_MOSI, LCD_CS, LCD_RS, LCD_RST);
    this->u8g = u8g;
    
    due_clock = &RTC_clock(XTAL);
   
    alarm = new Alarm();
    
    //root = new RootWidget(enc, u8g);
   
    //clockface = new Clock_Face(root,enc, u8g, alarm, due_clock); 
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
    labels.add(new String("Rainbow"));
    labels.add(new String("Colorwave"));
    labels.add(new String("Done"));
    lightm = new Menu(clockface,&labels);
         
    // Create Special Menus
    alarmm = new Alarm_Menu(clockface,alarm);
    singlecolorm = new SingleColor_Menu(clockface,fader);
    
    // Set targets
    clockface->set_target(setup);
    
    setup->add_target(0,alarmm);
    setup->add_target(1,lightm);
    setup->add_target(2,settings);
    setup->add_target(3,clockface);

    lightm->add_target(0,singlecolorm);
    
}

/*
 * function init()
 *
 * should be called in setup(), initializes all stuff and sets u8g parameters
 */
void UI::init() {
            
	//u8g->setColorIndex(1);         //BW Mode

        due_clock->init();
        
        clock.getTime(); 
        
        due_clock->set_time(clock.hour, clock.minute, clock.second);

	TSL2561.init();
         
	analogWrite(BACKLIGHT_RED,   redVal);   // Write current values to LED pins
	analogWrite(BACKLIGHT_GREEN, greenVal);
	analogWrite(BACKLIGHT_BLUE,  blueVal);       
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
    cycleRBG(millis());
}

void UI::input() {
        Widget::has_input->input();
}

/*
 * function cycleRBG()
 *
 * function for cycling through the colors of the backlight
 */
void UI::cycleRBG(long ms) { 
	redVal = floor( 128 + 127 * (double)  cos(2*PI/period*ms) );
	greenVal = floor( 128 + 127 * (double) cos(2*PI/period*(phase_green-ms)));
	blueVal = floor( 128 + 127 * (double) cos(2*PI/period*(phase_blue-ms)));
  
	analogWrite(BACKLIGHT_RED,   redVal);   // Write current values to LED pins
	analogWrite(BACKLIGHT_GREEN, greenVal);
	analogWrite(BACKLIGHT_BLUE,  blueVal);
}