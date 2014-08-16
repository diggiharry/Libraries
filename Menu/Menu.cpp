#include "Menu.h"

Menu::Menu(Encoder *encoder, U8GLIB_LM6059_2X *u8glib,int *parent_state) {
    enc = encoder;  
    u8g = u8glib;
    p_state = parent_state;
}

static void Menu::switch_blink() {
    Menu::blink = !Menu::blink;
}

static void Menu::switch_blinkfast() {
    Menu::blinkfast = !Menu::blinkfast;
}


static String Menu::time2str(int hour,int minute) {
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

static String Menu::dec2str(int dec) {
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