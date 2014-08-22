#include "UI.h"


// the LCD backlight is connected up to a pin so you can turn it on & off
#define BACKLIGHT_RED 5
#define BACKLIGHT_GREEN 6 
#define BACKLIGHT_BLUE 7

/*
 * Constructor
 */
UI::UI(Encoder *encoder,Fader *fader) 
    :   Widget(encoder, &u8g),  
        u8g(LCD_SCK, LCD_MOSI, LCD_CS, LCD_RS, LCD_RST),
        alarm()
{
    dim = 255; // has to be between 26 and 255 !
    redVal = 0; // Variables to store the values to send to the pins
    greenVal = 0;   // Initial values are Red full, Green and Blue off
    blueVal = 0;

    phase_green = 500;
    phase_blue = 1000;
    period = 50000;

    backlight = true;
    pinMode(BACKLIGHT_RED,   OUTPUT);   // sets the pins as output
    pinMode(BACKLIGHT_GREEN, OUTPUT);
    pinMode(BACKLIGHT_BLUE,  OUTPUT);

    lux = 0;

    enc = encoder;
    
    fade = fader;
    
    due_clock = &RTC_clock(XTAL);

    this->parent = this;
    this->claim_input();
    
    // create Setup Menu
    LinkedList<String*> labels = LinkedList<String*>();
    labels.add(new String("Set Alarm"));
    labels.add(new String("Set Lights"));
    labels.add(new String("Settings"));
    labels.add(new String("Done"));
    setup = new Menu(this,labels);
    
    alarmm = new Alarm_Menu(this,&alarm);
    
    setup->add_action(0,alarmm);
    setup->visible = true;
    
    clockface = new Clock_Face(this,&alarm,due_clock); 
    clockface->claim_draw();
    
}

/*
 * function init()
 *
 * should be called in setup(), initializes all stuff and sets u8g parameters
 */
void UI::init() {
            
	u8g.setColorIndex(1);         //BW Mode

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
  u8g.firstPage();  
  do {      
      is_drawn.draw();
  } while( u8g.nextPage() ); 
}

void UI::input() {
    has_input.input();
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