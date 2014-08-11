#include "ShiftBar_Anim.h"

ShiftBar_Anim::ShiftBar_Anim(unsigned char modules, unsigned int *values)
{
  num_modules = modules;
  _targetvalues = values;
  _values = values;

  /* Initialize to all-off */
  for (int i = 0; i < (num_modules * 3); i++) {
    _targetvalues[i] = 0;
    _values[i] = 0;
  }
}

/* Set the values for one module */
void ShiftBar_Anim::set(unsigned char module,
		unsigned int red, unsigned int green, unsigned int blue)
{
  _targetvalues[module * 3 + 0] = red;
  _targetvalues[module * 3 + 1] = green;
  _targetvalues[module * 3 + 2] = blue;
}

void ShiftBar_Anim::init() {
	  SPI.setClockDivider(21);
	  SPI.setBitOrder(MSBFIRST);

	  //SPI.begin();

	  /* Setup the ShiftBrite pins */
	  pinMode(SHIFTBAR_LATCH_PIN, OUTPUT);
	  pinMode(SHIFTBAR_ENABLE_PIN, OUTPUT);

	  digitalWrite(SHIFTBAR_LATCH_PIN, LOW);
	  digitalWrite(SHIFTBAR_ENABLE_PIN, LOW);

	  for (int z = 0; z < num_modules; z++) spiSend(B01, 0, 0, 0);

	  delayMicroseconds(15);
	  digitalWrite(SHIFTBAR_LATCH_PIN, HIGH); // latch data into registers
	  delayMicroseconds(15);
	  digitalWrite(SHIFTBAR_LATCH_PIN, LOW);
}

/* Default for single module */
void ShiftBar_Anim::set(unsigned int red, unsigned int green, unsigned int blue)
{
  set(0, red, green, blue);
}

void ShiftBar_Anim::spiSend(int commandmode, int red, int blue, int green) {
  if (commandmode == B01) {
    red = 120;
    green = 100;
    blue = 100;
  }
  /* buffer
   * MBS																						   LBS
   *  31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00
   *Command |	 BLUE					| |			RED				  |	|			GREEN	        |
   *  ?? CM B9 B8 B7 B6 B5 B4 B3 B2 B1 B0 R9 R8 R7 R6 R5 R4 R3 R2 R1 R0 G9 G8 G7 G6 G5 G4 G3 G2 G1 G0
   *  |			byte1		| |        byte2        | |       byte3         | |        byte4        |
   */
  unsigned int buffer = 0;

  buffer = buffer + (commandmode << 30);
  buffer = buffer + ( (0b1111111111 & blue)  << 20 );
  buffer = buffer + ( (0b1111111111 & red)  << 10 );
  buffer = buffer +  (0b1111111111 & green) ;

  SPI.transfer( (unsigned char) ( ( (255 << 24) & buffer ) >> 24) );
  SPI.transfer( (unsigned char) ( ( (255 << 16) & buffer ) >> 16) );
  SPI.transfer( (unsigned char) ( ( (255 <<  8) & buffer ) >>  8) );
  SPI.transfer( (unsigned char) ( ( (255 <<  0) & buffer ) >>  0) );
}

void ShiftBar_Anim::linear_transition() {
	int diff = 0;
	int c = 1;

	  for (int i = 0; i < (num_modules * 3); i++) {
		diff = _targetvalues[i * 3 + 0] - _values[i * 3 + 0];
		if ( abs(diff) < 10) c = 1;
		else c = 1;

		if (diff < 0) _values[i * 3 + 0] += c;
		else if (diff > 0) _values[i * 3 + 0] -= c;
	}
}

void ShiftBar_Anim::update() {
	linear_transition();
	// Write to PWM control registers
	for (int h = 0; h < num_modules; h++) {
	spiSend(B00,
			_values[h + 0],
			_values[h + 1],
			_values[h + 2]);
	}

	delayMicroseconds(15);
	digitalWrite(SHIFTBAR_LATCH_PIN, HIGH); // latch data into registers
	delayMicroseconds(15);
	digitalWrite(SHIFTBAR_LATCH_PIN, LOW);

/*  for (int z = 0; z < num_modules; z++) spiSend(B01, 0, 0, 0);
  delayMicroseconds(15);
  digitalWrite(SHIFTBAR_LATCH_PIN, HIGH); // latch data into registers
  delayMicroseconds(15);
  digitalWrite(SHIFTBAR_LATCH_PIN, LOW);*/
}

