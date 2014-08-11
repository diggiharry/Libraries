/*
  Music.cpp - Library for Music Player Shield code.
  Created by Lee Zhenqiang, November 22nd, 2012.
  Released into the public domain.
*/

#include "Music.h"

Music music;

void Music::init()
{
	pinMode(playbotton,OUTPUT);
	pinMode(nextbotton,OUTPUT);
	pinMode(prevbotton,OUTPUT);
	pinMode(powerbotton,OUTPUT);
	_playbotton=playbotton;
	_nextbotton=nextbotton;
	_prevbotton=prevbotton;
	_powerbotton=powerbotton;


}

void Music::play()
{
	digitalWrite(_playbotton,HIGH);
	delay(100);
	digitalWrite(_playbotton,LOW);

}


void Music::pause()
{
	digitalWrite(_playbotton,HIGH);
	delay(100);
	digitalWrite(_playbotton,LOW);
}

void Music::next()
{
	digitalWrite(_nextbotton,HIGH);
	delay(100);
	digitalWrite(_nextbotton,LOW);	
}

void Music::prev()
{
	digitalWrite(_prevbotton,HIGH);
	delay(100);
	digitalWrite(_prevbotton,LOW);	
}


void Music::volume(bool direct, uint8_t volumevalue)
{
	if(direct==UP)
	{
	digitalWrite(_nextbotton,HIGH);
	delay(2000+500*volumevalue);
	digitalWrite(_nextbotton,LOW);	
	}
	
	else if(direct==DOWN)
	{
	digitalWrite(_prevbotton,HIGH);
	delay(2000+500*volumevalue);
	digitalWrite(_prevbotton,LOW);		
	}
}

void Music::power(bool powerstatus)
{
	if(powerstatus==ON)
	{
		digitalWrite(_powerbotton,HIGH);
		delay(100);
		digitalWrite(_powerbotton,LOW);		
	}
	else if(powerstatus==DOWN)
	{
		digitalWrite(_powerbotton,HIGH);
		delay(100);
		digitalWrite(_powerbotton,LOW);		
	}
}