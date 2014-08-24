/* 
 * File:   SoundManager.cpp
 * Author: sei
 * 
 * Created on 23. August 2014, 20:55
 */

#include "SoundManager.h"

SoundManager::SoundManager(HardwareSerial &Serial) {
    volume = 5;
    DFPlayer::mp3_set_serial(Serial);
    DFPlayer::mp3_set_volume(volume);
    DFPlayer::mp3_DAC(true);   
}

void SoundManager::play()  {
    DFPlayer::mp3_play();    
}

void SoundManager::stop() {
    DFPlayer::mp3_stop();    
}

void SoundManager::next() {
    DFPlayer::mp3_next();
}
void SoundManager::prev() {
    DFPlayer::mp3_prev();
}
void SoundManager::set_volume(int volume) {
    volume = volume;
    DFPlayer::mp3_set_volume(volume);
}
void SoundManager::fade_in(int duration) {
    
}
void SoundManager::fade_out(int duration) {
    
}
void SoundManager::update() {
    
}
  

