#include "Scroller.h"


Scroller::Scroller(MPR121 *mpr121,int min_value, int max_value,int mpr121_inputs[],int size) {
	touch = mpr121;
	scroller_value = min_value;
	max = max_value;
	min = min_value;

	n = size;

	inputs = mpr121_inputs;
	for (int i = 0; i<n; i++) {
		inputs[i] = mpr121_inputs[i];
	}

	touchStates = new boolean[n];
	prev_touchStates = new boolean[n];
	for (int i = 0; i<n; i++) {
		touchStates[i] = 0;
		prev_touchStates[i] = 0;
	}

	pos = 0;
	prev_pos = 0;
}

void Scroller::interrupt_fun() {

	prev_touchStates = touchStates;
	for (int i = 0; i<n; i++) {
		touchStates[i] = touch->isTouched(inputs[i]);
	}

	int left= 0;
	for (int i = 0; i<n; i++) {
		if (touchStates[i]) {
			left = i;
			break;
		}
	}

	int right = n-1;
	for (int i = left; i<n; i++) {
		if ( !touchStates[i]) {
			right = i;
			break;
		}
	}

	prev_pos = pos;
	pos = (right+left)/2 ;

	if ( pos == (prev_pos+1) ) scroller_value++;
	if ( pos == (prev_pos-1) ) scroller_value--;

	if (scroller_value > max) scroller_value = min;
	if (scroller_value < min) scroller_value = max;

/*	Serial.print("inputs: ");
	for (int i = 0; i<n; i++) {
		Serial.print(inputs[i]);
		Serial.print(",");
	}
	Serial.print("  touch: ");
	for (int i = 0; i<n; i++) {
		Serial.print(touchStates[i]);
		Serial.print(",");
	}
	Serial.print("  n: ");
	Serial.print(n);
	Serial.print("  left: ");
	Serial.print(left);
	Serial.print("  right: ");
	Serial.print(right);
	Serial.print("  prev_pos: ");
	Serial.print(prev_pos);
	Serial.print("  pos: ");
	Serial.print(pos);
	Serial.print("  scroller_values: ");
	Serial.print(scroller_value);
	Serial.println();
*/
}

int Scroller::getValue() {
	return scroller_value;
}

void Scroller::setValue(int Value) {
	if (Value <= (max))
		if (Value >= (min))
			scroller_value = Value;
}

void Scroller::setBounds(int min_value, int max_value) {
	scroller_value = min_value;
	min = min_value;
	max = max_value;
}
