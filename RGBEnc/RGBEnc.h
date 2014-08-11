/*
RGBEnc.h
Library for sparkfun RBG Rotary Encoder by sei
Based on :
Copyright 2011 Ben Buxton. Licenced under the GNU GPL Version 3.
Contact: bb@cactii.net
Quick implementation of rotary encoder routine.
More info: http://www.buxtronix.net/2011/10/rotary-encoders-done-properly.html
*/

#ifndef rgbenc_h
#define rgbenc_h

#include <Arduino.h>

#define DIR_CCW 0x10
#define DIR_CW 0x20

class RGBEnc {
  public:
	RGBEnc(int red_pin,int green_pin,int blue_pin,int button_pin,int A_pin,int B_pin, int min_value, int max_value);

	void setColor(unsigned char red, unsigned char blue, unsigned char green);

	//must be attached to interrupt of A and B
	void updateEncoder();

	void updateButton();

	void Init();

	int getValue();

	void setBounds(int min_value, int max_value);

	void setValue(int Value);

	boolean isPressed();

	boolean isReleased();

  private:

	int red;
	int green;
	int blue;
	int button;

	int A;
	int B;

	int min;
	int max;

	boolean buttonState;
	boolean lastbuttonState;

	volatile int enc_delta;
	int last_ecnoder_value;
	int encoder_value;

};


#endif
