/**
  * @file    lcd.c
  * @brief   This file is to impelement the LCD functionality
  * @author  Ahmed Abd El-Ghafar
  */

/* Start Global declaration section */
unsigned short lcd_debug = 100;
/* End Global declaration section */

void print_lcd_debug(void){
    printf("lcd_debug = %d\n", lcd_debug);
}

void print_embedded_diloma(void){
    printf("ES Diploma\n");
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
