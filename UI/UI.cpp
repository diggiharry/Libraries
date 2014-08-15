#include "UI.h"


// the LCD backlight is connected up to a pin so you can turn it on & off
#define BACKLIGHT_RED 5
#define BACKLIGHT_GREEN 6 
#define BACKLIGHT_BLUE 7

static U8GLIB_LM6059_2X u8g(LCD_SCK, LCD_MOSI, LCD_CS, LCD_RS, LCD_RST);

/*
 * Constructor
 */
UI::UI(Encoder *encoder) {
	ui_state = STATE_CLOCK;
	setup_state = 0;

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

    interval = 1000;
    previousMillis = 0;
    currentMillis = 0;
    blink = true;
    blinkfast = true;

    lux = 0;

    alarm_state = 0;
    alarm_hour = 0;
    alarm_minute = 0;
    alarm_is_set = false;

    enc = encoder;
    
    due_clock = &RTC_clock(XTAL);
}

/*
 * function init()
 *
 * should be called in setup(), initializes mpr121 and sets u8g parameters
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
    blink = !blink;
}

void UI::switch_blinkfast() {
    blinkfast = !blinkfast;
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

String UI::time2str(int hour,int minute) {
	String h;
	if (hour < 9) {
		h = String(hour);
		h = "0" + h;
	} else {
		h = String(hour);
	}
	String m;
	if (minute < 9) {
		m = String(minute);
		m = "0" + m;
	} else {
		m = String(minute);
	}
	return h+":"+m;
}

String UI::dec2str(int dec) {
	if (dec < 99) {
		String n;
		if (dec < 10) {
			n = String(dec);
			n = "0" + n;
		} else {
			n = String(dec);
		}
		return n;
	} else return String("na");
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
	   case	STATE_CLOCK:
		   draw_clock();
		   //enc_clock();
	   	   break;
	   case STATE_SETUP:
		   draw_setup();
		   //enc_setup();
	   	   break;
	   case STATE_ALARM:
		   draw_alarm();
		   //enc_alarm();
	   	   break;
	}
  } while( u8g.nextPage() ); 

}


void UI::update_input() {
	switch(ui_state)
	  {
	   case	STATE_CLOCK:
		   //draw_clock();
		   enc_clock();
		   break;
	   case STATE_SETUP:
		   //draw_setup();
		   enc_setup();
		   break;
	   case STATE_ALARM:
		   //draw_alarm();
		   enc_alarm();
		   break;
	  }
}


/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void UI::enc_clock(void) {
	if (enc->isReleased()) {
			  ui_state = STATE_SETUP;
			  setup_state = 0;
			  enc->setBounds(0,3,15);
	}
}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void UI::draw_clock(void) {
	int time_y = 47;
	int time_x = 10;

	// draw alarm time and set height of time
	if (alarm_is_set) {
		u8g.setFont(u8g_font_fixed_v0);
		u8g.setPrintPos(27,57);
		u8g.print("ALARM AT");
		u8g.setPrintPos(77,57);
		u8g.print( time2str(alarm_hour,alarm_minute) );
		time_y = 40;
	} else {
	  u8g.setFont(u8g_font_fixed_v0);
	  u8g.setPrintPos(50,57);
	  u8g.print(lux);
	  u8g.setPrintPos(90,57);
	  //u8g.print(touch->wasPressed(MPR121_MENU));
	  u8g.setPrintPos(100,57);
	  u8g.print(enc->getValue());
          //unsigned long ms = millis();
          //int phase = 3000;
          //int period = 5000;
          //u8g.print( 1024 * 2 * abs(round( ( (float) ms+phase)/period)-( ( (float) ms+phase)/ period))  );
          //u8g.print(ms);
	  time_y = 40;
	}

	// Draw Time
	u8g.setFont(u8g_font_fub30n);
	u8g.setPrintPos(time_x,time_y);
	//u8g.print(dec2str(clock.hour));
        u8g.print(dec2str(due_clock->get_hours()));
        
	u8g.setPrintPos(time_x+60,time_y);
	//u8g.print(dec2str(clock.minute));
        u8g.print(dec2str(due_clock->get_minutes()));
        
	u8g.setFont(u8g_font_fixed_v0);
	u8g.setPrintPos(time_x+106,time_y);
	//u8g.print(dec2str(clock.second));
        u8g.print(dec2str(due_clock->get_seconds()));

	// draw blinking colon
	if (blink) {
		u8g.setFont(u8g_font_fub30n);
		//u8g.setFont(u8g_font_courR24);
		u8g.setPrintPos(time_x+46,time_y-5);
		u8g.print(":");
	}
}

/*
 * function enc_setup()
 *
 * encoder assignment for setup
 */
void UI::enc_setup(void) {
	setup_state = enc->getValue();

	if (enc->isReleased()) {
		switch(setup_state)
		{
		case 0:
			ui_state = STATE_ALARM;
			alarm_state = -1;
			break;
		case 1:
			ui_state = STATE_LIGHTRGB;
			break;
		case 2:
			ui_state = STATE_LCDRGB;
			break;
		case 3:
			ui_state = STATE_CLOCK;
			break;
		}
	}
}

/*
 * function draw_setup()
 *
 * function for drawing the setup screen
 */
void UI::draw_setup(void) {
	int y = 10;
	int x = 20;

	u8g.setFont(u8g_font_courR10);
	u8g.setPrintPos(x,y);
	u8g.print("Set Alarm");
	u8g.setPrintPos(x,y+15);
	u8g.print("Light RGB");
	u8g.setPrintPos(x,y+30);
	u8g.print("LCD RGB");
	u8g.setPrintPos(x,y+45);
	u8g.print("Exit");

	u8g.setFont(u8g_font_symb14);
	switch(setup_state)
	{
	case 0:
		u8g.setPrintPos(0,y);
		break;
	case 1:
		u8g.setPrintPos(0,y+15);
		break;
	case 2:
		u8g.setPrintPos(0,y+30);
		break;
	case 3:
		u8g.setPrintPos(0,y+45);
		break;
	}
	u8g.print( (char) 174);
}

/*
 * function enc_clock()
 *
 * encoder assignment for clock-face
 */
void UI::enc_alarm(void) {

	switch(alarm_state)
	{
	case -1:
		enc->setBounds(1,24,10);
		enc->setValue(alarm_hour);
		alarm_state = 0;
		break;
	case 0:
		alarm_hour = enc->getValue();
		break;
	case 1:
		alarm_minute = enc->getValue();
		break;
	case 2:
		alarm_is_set = enc->getValue();
		break;
	}

	if (enc->isReleased()) {
		switch(alarm_state)
		{
		case 0:
			alarm_state = 1;
			enc->setBounds(0,59,8);
			enc->setValue(alarm_minute);
			break;
		case 1:
			alarm_state = 2;
			enc->setBounds(0,1,20);
			enc->setValue(alarm_is_set);
			break;
		case 2:
			ui_state = STATE_CLOCK;
			break;
		}
	}

}

/*
 * function draw_clock()
 *
 * function for drawing the clock-face
 */
void UI::draw_alarm(void) {
	int time_y = 45;
	int time_x = 10;

	u8g.setFont(u8g_font_fixed_v0);
	u8g.setPrintPos(10,10);
	u8g.print("SET ALARM TIME");

	// draw alarm state
	if (alarm_is_set) {
		u8g.setFont(u8g_font_fixed_v0);
		u8g.setPrintPos(10,57);
		u8g.print("Alarm is set");
	} else {
		u8g.setFont(u8g_font_fixed_v0);
		u8g.setPrintPos(10,57);
		u8g.print("Alarm is not set");
	}

	// Draw Time
	u8g.setFont(u8g_font_fub30n);
	u8g.setPrintPos(time_x,time_y);
	u8g.print(dec2str(alarm_hour));

	u8g.setPrintPos(time_x+60,time_y);
	u8g.print(dec2str(alarm_minute));

	u8g.setFont(u8g_font_fub30n);
	u8g.setPrintPos(time_x+46,time_y-5);
	u8g.print(":");

	if (blinkfast)
	switch(alarm_state)
	{
	case 0:
		u8g.drawLine(time_x+5,time_y+1,time_x+40,time_y+1);
		break;
	case 1:
		u8g.drawLine(time_x+5+60,time_y+1,time_x+40+60,time_y+1);
		break;
	case 2:
		if (!alarm_is_set) u8g.drawLine(10,58,98,58);
		else u8g.drawLine(10,58,75,58);
		break;
	}
}


/*
 * function enc_lightrgb()
 *
 * encoder assignment for lightrgb
 */
void UI::enc_lightrgb(void) {

	switch(lightrgb_state)
	{
	case -1:
		enc->setBounds(1,24,10);
		enc->setValue(alarm_hour);
		alarm_state = 0;
		break;
	case 0:
		alarm_hour = enc->getValue();
		break;
	case 1:
		alarm_minute = enc->getValue();
		break;
	case 2:
		alarm_is_set = enc->getValue();
		break;
	}

	if (enc->isReleased()) {
		switch(alarm_state)
		{
		case 0:
			alarm_state = 1;
			enc->setBounds(0,59,8);
			enc->setValue(alarm_minute);
			break;
		case 1:
			alarm_state = 2;
			enc->setBounds(0,1,20);
			enc->setValue(alarm_is_set);
			break;
		case 2:
			ui_state = STATE_CLOCK;
			break;
		}
	}

}

/*
 * function draw_lightrgb()
 *
 * function for selecting rgb mode
 */
void UI::draw_lightrgb(void) {
	int time_y = 45;
	int time_x = 10;

	u8g.setFont(u8g_font_fixed_v0);
	u8g.setPrintPos(10,10);
	u8g.print("SET ALARM TIME");

	// draw alarm state
	if (alarm_is_set) {
		u8g.setFont(u8g_font_fixed_v0);
		u8g.setPrintPos(10,57);
		u8g.print("Alarm is set");
	} else {
		u8g.setFont(u8g_font_fixed_v0);
		u8g.setPrintPos(10,57);
		u8g.print("Alarm is not set");
	}

	// Draw Time
	u8g.setFont(u8g_font_fub30n);
	u8g.setPrintPos(time_x,time_y);
	u8g.print(dec2str(alarm_hour));

	u8g.setPrintPos(time_x+60,time_y);
	u8g.print(dec2str(alarm_minute));

	u8g.setFont(u8g_font_fub30n);
	u8g.setPrintPos(time_x+46,time_y-5);
	u8g.print(":");

	if (blinkfast)
	switch(alarm_state)
	{
	case 0:
		u8g.drawLine(time_x+5,time_y+1,time_x+40,time_y+1);
		break;
	case 1:
		u8g.drawLine(time_x+5+60,time_y+1,time_x+40+60,time_y+1);
		break;
	case 2:
		if (!alarm_is_set) u8g.drawLine(10,58,98,58);
		else u8g.drawLine(10,58,75,58);
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
