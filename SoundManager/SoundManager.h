/* 
 * File:   SoundManager.h
 * Author: sei
 *
 * Created on 23. August 2014, 20:55
 */

#ifndef SOUNDMANAGER_H
#define	SOUNDMANAGER_H

#include <DFPlayer_Mini_Mp3.h>

class SoundManager {
public:
    SoundManager(HardwareSerial &Serial);
    
    void play();
    void stop();
    void next();
    void prev();
    void set_volume(int volume);
    int get_volume();
    void fade_in();
    void fade_out();
    
    void update();
    
private:
    HardwareSerial *HSerial;
    int volume;
    int target_volume;
    void read();
};

#endif	/* SOUNDMANAGER_H */

