/*
 * micro_config.h
 *  Author: GOUDA
 */ 


#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_


#ifndef F_CPU
#define F_CPU 8000000UL //8MHz Clock frequency
#endif  

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include "std_types.h"
#include "common_macros.h"
#include "lcd.h"
#include "keypad.h"
#include "IntEEPROM.h"
#include "uart.h"
#include "uart_messages.h"
#include "password.h"
#include "timer0_normal.h"

#endif /* MICRO_CONFIG_H_ */
