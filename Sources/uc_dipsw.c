//*******************************************************************************************************
// uc_dipsw.c
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
#include "uc_dipsw.h"
#include "gpio.h"

//Calls gpio_port_get_pin_state() to return the state of the pin connected to sub-switch p_switch.
gpio_pin_state_t uc_dipsw_get_state(gpio_pin_t p_switch)
{
	
    return gpio_port_get_pin_state(gpio_port_dd, p_switch);
    
}


//Calls gpio_port_init() to initialize port DD so we can use sub-switches 1, 2, 3, and 4.
void uc_dipsw_init() 
{
	gpio_port_init(gpio_port_dd,uc_dipsw_1,gpio_funct_gpio,gpio_data_dir_in,gpio_pin_state_x);
	gpio_port_init(gpio_port_dd,uc_dipsw_2,gpio_funct_gpio,gpio_data_dir_in,gpio_pin_state_x);
	gpio_port_init(gpio_port_dd,uc_dipsw_3,gpio_funct_gpio,gpio_data_dir_in,gpio_pin_state_x);
	gpio_port_init(gpio_port_dd,uc_dipsw_4,gpio_funct_gpio,gpio_data_dir_in,gpio_pin_state_x);
    //gpio_port_init(p_port, p_pin, p_funct, p_data_dir, p_state);
}