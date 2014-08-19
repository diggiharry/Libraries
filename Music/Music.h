/*
  Music.h - Library for Music Player Shield code.
  Created by Lee Zhenqiang, November 22nd, 2012.
  Released into the public domain.
*/

#ifndef Music_h
#define Music_h

#include "Arduino.h"


#define UP HIGH
#define DOWN LOW

#define ON HIGH
#define OFF LOW

/*
#define playbotton A0
#define nextbotton A1
#define prevbotton A2
#define powerbotton A3
*/
// For due :
#define playbotton 54
#define nextbotton 55
#define prevbotton 56
#define powerbotton 57


class Music {
	public:
		void init();
		void play();
		void pause();
		void next();
		void prev();
		void volume(bool direct, uint8_t volumevalue);
		void power(bool powerstatus);
	private:
		uint8_t _playbotton;
		uint8_t _nextbotton;
		uint8_t _prevbotton;
		uint8_t _powerbotton;

};

extern Music music;

#endif