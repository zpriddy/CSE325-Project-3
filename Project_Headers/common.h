//*******************************************************************************************************
// common.h
//
// DESCRIPTION: A common header file for all header files.
//
// AUTHORS:
// 	Abdulla Al Braiki (ayalbrai@asu.edu)
//	Zachary Priddy (zpriddy@asu.edu)
//
// Computer Science & Engineering
// Arizona State University
// Tempe, AZ 85287-8809
// 
//********************************************************************************************************
#ifndef COMMON_H_
#define COMMON_H_

/*Header Files*/
#include "dtim.h"
#include "gpio.h"
#include "uc_dipsw.h"
#include "uc_led.h"
#include "support_common.h"
#include "uc_pushb.h"
#include "gpt.h"
#include "int.h"
#include "gpio.h"




#define DELAY_TIME		(250)

#define PORT_TC 		(0x0F)
#define PORT_TA		(0x0E)
#define PORT_DD 		(0x14)
#define FUNCT_GPIO 		(0x00)
#define FUNCT_GPT			(0x01)
#define DATA_DIR_OUT 	(0x01)
#define DATA_DIR_IN		(0x00)

#define UC_LED1 		(0)
#define UC_LED2 		(1)
#define UC_LED3 		(2)
#define UC_LED4 		(3)

#define UC_PB1			(0)//(44)
#define UC_PB2			(1)//(1)


#define UC_DIPSW1		(4)
#define UC_DIPSW2		(5)
#define UC_DIPSW3		(6)
#define UC_DIPSW4		(7)

#define LED_ON 			(1)
#define LED_OFF 			(0)

#define ON 				(1)
#define OFF				(0)

extern volatile int LED_DIR;









#endif /* COMMON_H_ */
