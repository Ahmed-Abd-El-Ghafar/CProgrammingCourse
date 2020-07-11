/**
  * @file    robot_movement.c
  * @brief   This file is to impelement the robot movement
  * @author  Ahmed Abd El-Ghafar
  */

/* Start Linking Section */
#include "lcd.h"
#include "robot_movement.h"
/* End Linking Section */

/* Start Global declaration section */
unsigned short robot_debug = 200;
/* End Global declaration section */

void print_robot_debug(void){
    printf("robot_debug = %d\n", robot_debug);
    print_embedded_diloma();
}

void print_pi(void){
    printf("PI = %f\n", PI);
}

/****************************************************************
				     	Revision History
****************************************************************/
/*
	* MM/DD/YYYY	  Name						Task Number		Description
	* ----------	  -------------------		-----------	    -----------------------------
	* 12/08/2014	  Ahmed Abd El-Ghafar		SR-51247        Initial Creation
	* 12/09/2014	  Ahmed Abd El-Ghafar		SR-51248        Adding Variable "var"
	* 12/09/2014	  Ahmed Abd El-Ghafar		SR-51246        Adding robot_move_forward
*/
