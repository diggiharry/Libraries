/* 
 * File:   SoundManager.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 20:55
 */

#include "SoundManager.h"

SoundManager::SoundManager(HardwareSerial &Serial) {
    HSerial = &Serial;
    volume = 20;
    target_volume = volume;
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
    this->volume = volume;
    this->target_volume = volume;
    DFPlayer::mp3_set_volume(volume);
    HSerial->flush();
    read();
}
int SoundManager::get_volume() {
   return target_volume; 
}
void SoundManager::fade_in() {
   target_volume = volume; 
}
void SoundManager::fade_out() {
    target_volume = 0;
}
void SoundManager::update() {
    if (volume < target_volume) {
        volume++;
        DFPlayer::mp3_set_volume(volume);
        HSerial->flush();
        read();
    }
    if (volume > target_volume) {
        volume--;
        DFPlayer::mp3_set_volume(volume);
        HSerial->flush();
        read();
    }    
}
  

