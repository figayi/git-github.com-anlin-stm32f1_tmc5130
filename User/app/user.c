#include "user.h"

u8 buff1[5] = {0xec, 0x00, 0x01, 0x00, 0xc3}; //0xEC000100C3
u8 buff2[5] = {0x90, 0x00, 0x06, 0x1f, 0x0a}; //0x9000061F0A
u8 buff3[5] = {0x91, 0x00, 0x00, 0x00, 0x0a}; //0x910000000A
u8 buff4[5] = {0x80, 0x00, 0x00, 0x00, 0x04}; //0x8000000004
u8 buff5[5] = {0x93, 0x00, 0x00, 0x01, 0xf4}; //0x93000001F4
u8 buff6[5] = {0xf0, 0x00, 0x04, 0x01, 0xc8}; //0xF0000401C8

u8 buff7[5] = {0xa4, 0x00, 0x00, 0x03, 0xe8}; //0xA4000003E8
u8 buff8[5] = {0xa5, 0x00, 0x00, 0xc3, 0x50}; //0xA50000C350
u8 buff9[5] = {0xa6, 0x00, 0x00, 0x01, 0xf4}; //0xA6000001F4
u8 buff10[5] = {0xa7, 0x00, 0x03, 0x0d, 0x40}; //0xA700030D40
u8 buff11[5] = {0xa8, 0x00, 0x00, 0x02, 0xbc}; //0xA8000002BC
u8 buff12[5] = {0xaa, 0x00, 0x00, 0x05, 0x78}; //0xAA00000578
u8 buff13[5] = {0xab, 0x00, 0x00, 0x00, 0x0a}; //0xAB0000000A
u8 buff14[5] = {0xa0, 0x00, 0x00, 0x00, 0x00}; //0xA000000000
u8 buff15[5] = {0xad, 0xff, 0xff, 0x38, 0x00}; //0xADFFFF3800
u8 buff16[5] = {0x21, 0x00, 0x00, 0x00, 0x00}; //0x2100000000

void user_task(void *pdata)
{
	u8 i;
	printf("enter user_task...\r\n");
	ENABLE_H();
	
	
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff7[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff8[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff9[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff10[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff11[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff12[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff13[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff14[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff15[i]);
	}
	for(i=0; i<5; i++){
		SPI2_H_SendByte(buff16[i]);
	}
	
	while(1){
		OSTimeDlyHMSM(0, 0, 0, 10);
		
	}
}














