/**
  * @file    main.c
  * @brief   This file is to impelement the main functionality
  * @author  Ahmed Abd El-Ghafar
  */

/* Start Linking Section */
#include "main.h"
/* End Linking Section */

/* Start Global declaration section */
unsigned int number_1, number_2, number_3;
unsigned int number_4, number_5 = 66, number_6 = 77;
float result = 0;
var_one = 33; // int var_one = 33
unsigned var_two = 33; //unsigned int var_one = 33
const float var_pi_1 = 3.14;

unsigned int var_1 = 200;
unsigned int var_2 = 200u;
unsigned int var_3 = 200U;
unsigned int var_4 = 0x334A;
unsigned int var_5 = 03357;
unsigned int var_6 = 200U;
unsigned long var_7 = 200l;
unsigned long var_8 = 200ul;
unsigned long var_9 = 0b10101010;

float var = 2E3;

/* End Global declaration section */

int main()
{
    printf("robot_debug = %d\n", robot_debug);
    printf("lcd_debug   = %d\n", lcd_debug);
    print_robot_debug();
    print_lcd_debug();
    robot_debug = 333;
    print_robot_debug();

    //var_pi_1 = 33.6;

    result = var_pi * 3;
    result = var_pi_1 * 3;

    printf("VAR1 = %d\n", 200);
    printf("VAR = %f\n", var);
    return 0;
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
