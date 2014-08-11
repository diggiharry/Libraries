/*
Encoder.h
Library for Rotary Encoder by sei
Based on :
Copyright 2011 Ben Buxton. Licenced under the GNU GPL Version 3.
Contact: bb@cactii.net
Quick implementation of rotary encoder routine.
More info: http://www.buxtronix.net/2011/10/rotary-encoders-done-properly.html
*/

#ifndef rgbenc_h
#define rgbenc_h

#include <Arduino.h>

#define R_START 0x0
#define R_CW_FINAL 0x1
#define R_CW_BEGIN 0x2
#define R_CW_NEXT 0x3
#define R_CCW_BEGIN 0x4
#define R_CCW_FINAL 0x5
#define R_CCW_NEXT 0x6

// No complete step yet.
#define DIR_NONE 0x0
// Clockwise step.
#define DIR_CW 0x10
// Anti-clockwise step.
#define DIR_CCW 0x20

const unsigned char ttable[7][4] = {
  // R_START
  {R_START,    R_CW_BEGIN,  R_CCW_BEGIN, R_START},
  // R_CW_FINAL
  {R_CW_NEXT,  R_START,     R_CW_FINAL,  R_START | DIR_CW},
  // R_CW_BEGIN
  {R_CW_NEXT,  R_CW_BEGIN,  R_START,     R_START},
  // R_CW_NEXT
  {R_CW_NEXT,  R_CW_BEGIN,  R_CW_FINAL,  R_START},
  // R_CCW_BEGIN
  {R_CCW_NEXT, R_START,     R_CCW_BEGIN, R_START},
  // R_CCW_FINAL
  {R_CCW_NEXT, R_CCW_FINAL, R_START,     R_START | DIR_CCW},
  // R_CCW_NEXT
  {R_CCW_NEXT, R_CCW_FINAL, R_CCW_BEGIN, R_START},
};


class Encoder {
  public:
	Encoder(int button_pin,int A_pin,int B_pin, int min_value, int max_value);

	//must be attached to interrupt of A and B
	void updateEncoder_A();
	void updateEncoder_B();

	void updateButton();

	void Init();

	int getValue();

	void setBounds(int min_value, int max_value, int oversampling);

	void setValue(int Value);

	boolean isPressed();

	boolean isReleased();

  private:

	int button;
	int A;
	int B;

	int min;
	int max;

	boolean buttonState;
	boolean lastbuttonState;

	unsigned int A_old;
	unsigned int B_new;
        
        inline void check_value();
            
        volatile int oversample;
	volatile signed int encoder_oversample_value;
        volatile int encoder_value;
       
};


#endif
