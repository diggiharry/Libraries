/*
 *	Scroller lib uses several MPR121-inputs as swipe/scroll-input
 *
 *
 */

#ifndef scroller_h
#define scroller_h


#include <Arduino.h>
#include <MPR121.h>

class Scroller {
  public:

	Scroller(MPR121 *mpr121,int min_value, int max_value, int mpr121_inputs[],int size);
	void interrupt_fun();

	int getValue();

	void setBounds(int min_value, int max_value);

	void setValue(int Value);

  private:
	MPR121 *touch;

	int min;
	int max;

	int *inputs;
	int n; //number of inputs

	int scroller_value;

	int pos;
	int prev_pos;

	boolean *touchStates; //to keep track of the previous touch states
	boolean *prev_touchStates; //to keep track of the previous touch states

  protected:


};

#endif
