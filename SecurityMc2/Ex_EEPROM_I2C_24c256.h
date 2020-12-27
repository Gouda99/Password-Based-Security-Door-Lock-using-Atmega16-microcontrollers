/*
 * External_EEPROM.h
 *  Author: GOUDA
 */

#ifndef EX_EEPROM_I2C_24C256_H_
#define EX_EEPROM_I2C_24C256_H_

#define ERROR 0
#define SUCCESS 1

#include "i2c.h"

void EEPROM_Init(void);
unsigned char EEPROM_Write_Byte(unsigned char u8Dev_addr, unsigned short u16Byte_addr,
		unsigned char u8data);
unsigned char EEPROM_Read_Byte(unsigned char u8Dev_addr, unsigned short u16Byte_addr,
		unsigned char *u8data);

#endif /* EX_EEPROM_I2C_24C256_H_ */
