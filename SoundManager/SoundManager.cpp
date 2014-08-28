/* 
 * File:   SoundManager.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 20:55
 */

#include "SoundManager.h"

SoundManager::SoundManager(HardwareSerial &Serial) {
    HSerial = &Serial;
    volume = 10;
    DFPlayer::mp3_set_serial(Serial);
    HSerial->flush();
    read();
    DFPlayer::mp3_set_volume(volume);
    HSerial->flush();
    read();
    DFPlayer::mp3_DAC(true);
    HSerial->flush();
    read();
}

void SoundManager::read() {
    while (HSerial->available()) {
        HSerial->read();
    }
    delay(50);
}

void SoundManager::play()  {
    DFPlayer::mp3_play(); 
    HSerial->flush();
    read();
}

void SoundManager::stop() {
    DFPlayer::mp3_stop(); 
    HSerial->flush();
    read();   
}

void SoundManager::next() {
    DFPlayer::mp3_next();
    HSerial->flush();
    read();    
}
void SoundManager::prev() {
    DFPlayer::mp3_prev();
    HSerial->flush();
    read();
}
void SoundManager::set_volume(int volume) {
    volume = volume;
    DFPlayer::mp3_set_volume(volume);
    HSerial->flush();
    read();
}
void SoundManager::fade_in(int duration) {
    
}
void SoundManager::fade_out(int duration) {
    
}
void SoundManager::update() {
    
}
  

