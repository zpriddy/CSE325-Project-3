//*******************************************************************************************************
// dtim.c
//
// DESCRIPTION:
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


#include "common.h"



/*The input parameter p_msecs is the number of milliseconds to delay. It is a 32-bit unsigned integer, so the range for
p_msecs would normally be [1, 232-1]. Since there are 1000 µs in 1 ms, this function passes 1000 ◊ p_msecs to dtim0_
busy_delay_us(). But, in order to avoid overflow when multiplying p_msecs by 1000, we must ensure that p_msecs =
4,294,967, so the real range for p_msecs is [1, 4294967]. If you pass in a value for p_msecs larger than 4,294,967 the timer
delay function will not operate correctly, so don't do that. By the way, 4,294,967 ms is approximately 4,295 sec which is
approximately 71:35 minutes.*/
void dtim0_busy_delay_ms(int p_msecs)
{
    if(p_msecs <= 4294967)
        dtim0_busy_delay_us(1000*p_msecs);
}

//The input parameter p_usecs is the number of microseconds to delay. It is a 32-bit unsigned integer, so the range for
//p_usecs is [1, 232 - 1].
void dtim0_busy_delay_us(int p_usecs)
{
    // ** FROM LECTURE 5 ** //
    MCF_DTIM0_DTER = 0x03;
    
    MCF_DTIM0_DTCN = 0x00000000;
    
    MCF_DTIM0_DTRR = (uint32)(p_usecs - 1); //**is p_usecs right for u??**//
    
    MCF_DTIM0_DTMR |= 0x0001;
    
    while (~MCF_DTIM0_DTER & 0x02) {}
}


//Initializes the DTIM0 timer as described in the Lecture 5 notes.
void dtim0_init()
{
    // ** FROM LECTURE 5 ** //
    MCF_DTIM0_DTMR |= 0x0001;
    MCF_DTIM0_DTMR &= 0xFFFE;
    
    MCF_DTIM0_DTMR = 0x4F02;
    
    MCF_DTIM0_DTXMR = 0x40;
}
