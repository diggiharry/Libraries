/*******************************************************************************
 * Copyright (C) 2014 DFRobot						       *
 *									       *
 * DFPlayer_Mini_Mp3, This library provides a quite complete function for      * 
 * DFPlayer mini mp3 module.                                                   *
 * www.github.com/dfrobot/DFPlayer_Mini_Mp3 (github as default source provider)*
 *  DFRobot-A great source for opensource hardware and robot.                  *
 *                                                                             *
 * This file is part of the DFplayer_Mini_Mp3 library.                         *
 *                                                                             *
 * DFPlayer_Mini_Mp3 is free software: you can redistribute it and/or          *
 * modify it under the terms of the GNU Lesser General Public License as       *
 * published by the Free Software Foundation, either version 3 of              *
 * the License, or any later version.                                          *
 *                                                                             *
 * DFPlayer_Mini_Mp3 is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
 * GNU Lesser General Public License for more details.                         *
 *                                                                             *
 * DFPlayer_Mini_Mp3 is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
 * GNU Lesser General Public License for more details.                         *
 *                                                                             *
 * You should have received a copy of the GNU Lesser General Public            *
 * License along with DFPlayer_Mini_Mp3. If not, see                           *
 * <http://www.gnu.org/licenses/>.                                             *
 *									       *
 ******************************************************************************/

/*
 *	name:		DFPlayer_Mini_Mp3
 *	version:	1.0
 *	Author:		lisper <lisper.li@dfrobot.com>
 *	Date:		2014-05-22
 *	Description:	mp3 library for DFPlayer mini board
 *			note: mp3 file must put into mp3 folder in your tf card
 */


//#include <Arduino.h>
//#include <SoftwareSerial.h>
#include  "DFPlayer_Mini_Mp3.h"

static uint8_t DFPlayer::send_buf[10];
static uint8_t DFPlayer::recv_buf[10];

static HardwareSerial * _hardware_serial = NULL;
//static SoftwareSerial * _software_serial = NULL;
static boolean is_reply = false;

DFPlayer::DFPlayer() {  
}

//
static void DFPlayer::mp3_set_reply (boolean state) {
	is_reply = state;
	send_buf[4] = is_reply;
}

//
static void DFPlayer::fill_uint16_bigend (uint8_t *thebuf, uint16_t data) {
	*thebuf =	(uint8_t)(data>>8);
	*(thebuf+1) =	(uint8_t)data;
}


//calc checksum (1~6 byte)
static uint16_t DFPlayer::mp3_get_checksum (uint8_t *thebuf) {
	uint16_t sum = 0;
	for (int i=1; i<7; i++) {
		sum += thebuf[i];
	}
	return -sum;
}

//fill checksum to send_buf (7~8 byte)
static void DFPlayer::mp3_fill_checksum () {
	uint16_t checksum = mp3_get_checksum (send_buf);
	fill_uint16_bigend (send_buf+7, checksum);
}

//
static void DFPlayer::send_func () {
	for (int i=0; i<10; i++) {
		_hardware_serial->write (send_buf[i]);
	}
}

//
//void mp3_set_serial (HardwareSerial *theSerial) {
static void DFPlayer::mp3_set_serial (HardwareSerial &theSerial) {
	_hardware_serial = &theSerial;
        send_buf[0] = 0x7E;
        send_buf[1] = 0xFF;
        send_buf[2] = 06;
        send_buf[3] = 00;
        send_buf[4] = 00;
        send_buf[5] = 00;
        send_buf[6] = 00;
        send_buf[7] = 00;
        send_buf[8] = 00;
        send_buf[9] = 0xEF;  
}

//
static void DFPlayer::mp3_send_cmd (uint8_t cmd, uint16_t arg) {
	send_buf[3] = cmd;
	fill_uint16_bigend ((send_buf+5), arg);
	mp3_fill_checksum ();
	send_func ();
}

//
static void DFPlayer::mp3_send_cmd (uint8_t cmd) {
	send_buf[3] = cmd;
	fill_uint16_bigend ((send_buf+5), 0);
	mp3_fill_checksum ();
	send_func ();
}


//
static void DFPlayer::mp3_play_physical (uint16_t num) {
	mp3_send_cmd (0x03, num);
}

//
static void DFPlayer::mp3_play_physical () {
	mp3_send_cmd (0x03);
}

//
static void DFPlayer::mp3_next () {
	mp3_send_cmd (0x01);
}

//
static void DFPlayer::mp3_prev () {
	mp3_send_cmd (0x02);
}

//0x06 set volume 0-30
static void DFPlayer::mp3_set_volume (uint16_t volume) {
	mp3_send_cmd (0x06, volume);
}

//0x07 set EQ0/1/2/3/4/5    Normal/Pop/Rock/Jazz/Classic/Bass
static void DFPlayer::mp3_set_EQ (uint16_t eq) {
	mp3_send_cmd (0x07, eq);
}

//0x09 set device 1/2/3/4/5 U/SD/AUX/SLEEP/FLASH
static void DFPlayer::mp3_set_device (uint16_t device) {
	mp3_send_cmd (0x09, device);
}

//
static void DFPlayer::mp3_sleep () {
	mp3_send_cmd (0x0a);
}

//
static void DFPlayer::mp3_reset () {
	mp3_send_cmd (0x0c);
}

//
static void DFPlayer::mp3_play () {
	mp3_send_cmd (0x0d);
}

//
static void DFPlayer::mp3_pause () {
	mp3_send_cmd (0x0e);
}

//
static void DFPlayer::mp3_stop () {
	mp3_send_cmd (0x16);
}

//play mp3 file in mp3 folder in your tf card
static void DFPlayer::mp3_play (uint16_t num) {
	mp3_send_cmd (0x12, num);
}

//
static void DFPlayer::mp3_get_state () {
	mp3_send_cmd (0x42);
}

//
static void DFPlayer::mp3_get_volume () {
	mp3_send_cmd (0x43);
}


//
static void DFPlayer::mp3_get_u_sum () {
	mp3_send_cmd (0x47);
}

//
static void DFPlayer::mp3_get_tf_sum () {
	mp3_send_cmd (0x48);
}

//
static void DFPlayer::mp3_get_flash_sum () {
	mp3_send_cmd (0x49);
}


//
static void DFPlayer::mp3_get_tf_current () {
	mp3_send_cmd (0x4c);
}

//
static void DFPlayer::mp3_get_u_current () {
	mp3_send_cmd (0x4b);
}


//
static void DFPlayer::mp3_get_flash_current () {
	mp3_send_cmd (0x4d);
}

//
static void DFPlayer::mp3_single_loop (boolean state) {
	mp3_send_cmd (0x19, !state);
}

//add 
static void DFPlayer::mp3_single_play (uint16_t num) {
	mp3_play (num);
	delay (10);
	mp3_single_loop (true); 
	//mp3_send_cmd (0x19, !state);
}

//
static void DFPlayer::mp3_DAC (boolean state) {
	mp3_send_cmd (0x1a, !state);
}

//
static void DFPlayer::mp3_random_play () {
	mp3_send_cmd (0x18);
}


