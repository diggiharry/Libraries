#include "Menu.h"

Menu::Menu(Encoder *encoder, U8GLIB *u8glib,int *parent_state) {
    enc = encoder;  
    u8g = u8glib;
    p_state = parent_state;
}

void Menu::switch_blink() {
    blink = !blink;
}

void Menu::switch_blinkfast() {
    blinkfast = !blinkfast;
}
