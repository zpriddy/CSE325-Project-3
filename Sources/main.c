//*******************************************************************************************************
// main.c
//
// DESCRIPTION:
//
// AUTHORS:
//  Abdulla Al Braiki (ayalbrai@asu.edu)
//  Zachary Priddy (zpriddy@asu.edu)
//
// Computer Science & Engineering
// Arizona State University
// Tempe, AZ 85287-8809
// 
//********************************************************************************************************

#include "common.h"
#include "uc_led.h"

#define forever for(;;)
int display[] = {1,2,4,8};
int delay = 200;
int j = 0;

volatile int LED_DIR = 1; //1 = forward, 0 = reverse


static void pb1_callback()
{
	LED_DIR=1;	
}
static void pb2_callback()
{
	LED_DIR=0;	
}



//Calls uc_dipsw_init() to initialize the GPIO port to access the DIP switch, uc_led_init() to initialize the port to access
//the LED's, and dtim0_init() to initialize DTIM0.
static void hw_init()
{
	int_inhibit_all();
	uc_dipsw_init();
	uc_led_init();
	dtim0_init();
	uc_pushb_init(pb1_callback, pb2_callback);
	int_uninhibit_all();
	
}




//Called by count_up() with p_value equal to value of the for loop in count_up(). Determines which LED's to turn on
//based on value and turns them on by calling uc_led_on().


//Call dipsw_delay_poll() to determine the initial state of the DIP sub-switches which becomes our original delay. Then
//drops into an infinite loop calling count_up(delay) forever.
static void run()
{
	int LED_DIR_OLD;


	
	/*
		
		if(LED_DIR == 1)
			uc_led_dis_bin(display[j]);
		else
			uc_led_dis_bin_rev(display[j]);
		
		dtim0_busy_delay_ms(250);

		*/
	
	uc_led_dis_bin(display[j]);
	dtim0_busy_delay_ms(250);
	
	if (LED_DIR == 1)
	{
		if(j < 3)
			j++;
		else
			j=0;
	}
	else
	{
		if(j > 0)
			j--;
		else
			j=3;
	}
	
		
		
		
	
	

	run();


	
	
	
}

// Calls hw_init() to initialize the hardware. Then calls run() to perform the main execution loop. Note that main() never
// returns, so omit the return statement at the end and use __declspec(noreturn) to tell the compiler that main() does
// not return.
__declspec(noreturn) int main()
{
	hw_init();
	run();
}