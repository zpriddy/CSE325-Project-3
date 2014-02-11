//*******************************************************************************************************
// uc_dipsw.h
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
#ifndef UC_DIPSW_H_
#define UC_DIPSW_H_

gpio_pin_state_t uc_dipsw_get_state(gpio_pin_t p_switch);
void uc_dipsw_init();

#endif // UC_DIPSW_H_