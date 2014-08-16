#include "UI.h"


// the LCD backlight is connected up to a pin so you can turn it on & off
#define BACKLIGHT_RED 5
#define BACKLIGHT_GREEN 6 
#define BACKLIGHT_BLUE 7

//static U8GLIB_LM6059_2X u8g(LCD_SCK, LCD_MOSI, LCD_CS, LCD_RS, LCD_RST);

//Clock_Menu clockm = clockm(&enc,&u8g,&ui_state);
//Setup_Menu setupm = setupm(&enc,&u8g,&ui_state);
//Alarm_Menu alarmm = alarmm(&enc,&u8g,&ui_state);

/*
 * Constructor
 */
UI::UI(Encoder *encoder,Fader *fader) 
    :   u8g(LCD_SCK, LCD_MOSI, LCD_CS, LCD_RS, LCD_RST),
        alarm()
{
	ui_state = STATE_CLOCK;
        
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
    
    clockm = new Clock_Menu(enc,&u8g,&ui_state,due_clock, &alarm); 
    alarmm = new Alarm_Menu(enc,&u8g,&ui_state,&alarm),
    setupm = new Setup_Menu(enc,&u8g,&ui_state); 
    lightm = new LightRGB_Menu(enc,&u8g,&ui_state,fade); 

}

/*
 * function init()
 *
 * should be called in setup(), initializes all stuff and sets u8g parameters
 */
void UI::init() {
	u8g.setColorIndex(1);         //BW Mode

	//init DS1307
	//clock.begin();
	clock.fillByYMD(2013,10,13); //Nov 13,2013
	//clock.fillByHMS(19,25,30);
	clock.fillByHMS(9,59,50);
	clock.fillDayOfWeek(SUN);//Sunday
	clock.setTime();//write time to the RTC chip

        due_clock->init();
        
        clock.getTime(); 
        
        due_clock->set_time(clock.hour, clock.minute, clock.second);

	TSL2561.init();
         
	analogWrite(BACKLIGHT_RED,   redVal);   // Write current values to LED pins
	analogWrite(BACKLIGHT_GREEN, greenVal);
	analogWrite(BACKLIGHT_BLUE,  blueVal);
}

void UI::switch_blink() {
    Menu::switch_blink();
}

void UI::switch_blinkfast() {
    Menu::switch_blinkfast();
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
	  switch(ui_state)
	  {
            case STATE_CLOCK:
                    clockm->draw();
                    break;
            case STATE_SETUP:
                    setupm->draw();
                    break;
            case STATE_ALARM:
                    alarmm->draw();
                    break;
            case STATE_LIGHTRGB:
                    lightm->draw();
                    break;                  
	}
  } while( u8g.nextPage() ); 
}

void UI::update_input() {
	switch(ui_state)
	  {
            case STATE_CLOCK:
                    clockm->input();
                    break;
            case STATE_SETUP:
                    setupm->input();
                    break;
            case STATE_ALARM:
                    alarmm->input();
                    break;
            case STATE_LIGHTRGB:
                    lightm->input();
                    break;
	  }
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
