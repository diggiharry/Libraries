/* 
 * File:   SoundManager.h
 * Author: sei
 *
 * Created on 23. August 2014, 20:55
 */

#ifndef SOUNDMANAGER_H
#define	SOUNDMANAGER_H

#include <Arduino.h>
#include <DFPlayer_Mini_Mp3.h>

class SoundManager {
public:
    SoundManager(HardwareSerial &Serial);
    
    void play();
    void stop();
    void next();
    void prev();
    void set_volume(int volume);
    void fade_in(int duration);
    void fade_out(int duration);
    
    void update();
    
private:
    
    int volume;
};

#endif	/* SOUNDMANAGER_H */

