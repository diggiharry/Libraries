/*
* Code from https://github.com/aphelps, modified to run on Arduino Due
*/

#ifndef SHIFTBAR_H
#define SHIFTBAR_H

#include <Arduino.h>
#include <SPI.h>

/* Shiftbrite additional Pins */
#define SHIFTBAR_ENABLE_PIN 3 // EI
#define SHIFTBAR_LATCH_PIN 2 // LI


#define SHIFTBAR_MAX 1023
#define SHIFTBAR_RED 0
#define SHIFTBAR_GREEN 1
#define SHIFTBAR_BLUE 2

class ShiftBar
{
  public:
	  ShiftBar(unsigned char modules, unsigned int *values);
	  void set(unsigned char module,  unsigned int red,  unsigned int green,  unsigned int blue);
	  void set(unsigned int, unsigned int green, unsigned int blue);
	  void update(void);
	  void init();

	  unsigned char num_modules;

  private:
	  unsigned int *_values;

	  void spiSend(int commandmode, int red, int blue, int green);
          
          inline void latch_registers();
};


#endif
