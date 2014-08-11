/*
  ShiftBar.h - Library for comunicating with shifbars and compatible devices.
  Created by Chris Heazlewood, November 1, 2011.
  Released into the public domain.
 * Modified for Arduino Due
*/

#ifndef ShiftBar_h
#define ShiftBar_h

#include "Arduino.h"
#include "SPI.h"


/* Shiftbrite additional Pins */
#define SHIFTBAR_ENABLE_PIN 3 // EI
#define SHIFTBAR_LATCH_PIN 2 // LI

class ShiftBar
{
  public:
	ShiftBar(int numberLeds);
	void SetNumberLeds(int numberLeds);
	void BufferAllLedsColour(int red, int green, int blue);
	void BufferLedColour(int led, int red, int green, int blue);
	void BufferLedCommand(int led, int redCommand, int greenCommand, int blueCommand);
	void BufferAllLedsColourNormalised(int red, int green, int blue);
	void BufferLedColourNormalised(int led, int red, int green, int blue);
	void WriteBufferToLEDArray();
	void SendDataPacket(int red, int green, int blue);
	void SendCommandPacket(int redCommand, int greenCommand, int blueCommand);
	void LatchToRegisters();
    static int MaxColourValue;
    static int MaxNormalisedColourValue;
    static int MaxCommandValue;
  
	
  private:
	int _numberLeds;
	int GetGammaCorrectedBrightness(int brightness);
    void SendPacket(int commandMode, int redCommand, int greenCommand, int blueCommand);

};
#endif