/***********************************
File		: Lecture 4 Memory Layout of C Programs.c
Description	: This is the main application
***********************************/

/*
	Flash Memory Content acoording to (STM32F407VG_FLASH.ld)
	1) The startup code goes first into FLASH
	2) The program code and other data goes into FLASH
	3) Constant data goes into FLASH "rodata"
*/

/*
	SRAM Memory Content acoording to (STM32F407VG_FLASH.ld)
	1) Initialized data sections goes into RAM
	2) Uninitialized data section 
	3) Heap
	4) Stack
*/

/* Start Linking Section */
#include <stdio.h>
#include <stdlib.h>
/* End Linking Section */

/* Start Global declaration section */

/* Initialized data sections goes into SRAM -> Refer to (STM32F407VG_FLASH.ld) -> Lines (116:126) */
/* Copy the data segment initializers from flash to SRAM -> Check startup_stm32f407xx.s -> Lines (84:97) */
unsigned int var_1 = 0;		/* Initialized Data Segment */
unsigned int var_2 = 55;	/* Initialized Data Segment */ 
static unsigned int var_3 = 66; /* Initialized Data Segment */
/*-------------------------------------------------*/
/* UnInitialized  Data Segment (BSS Segment) -> Equal to Zero (Filled by the Startup Code) */
/* Uninitialized data section -> Refer to (STM32F407VG_FLASH.ld) -> Lines (148:162) */
/* Zero fill the bss segment -> Check startup_stm32f407xx.s -> Lines (99:106) */
unsigned int var_;	/* UnInitialized  Data Segment */
static unsigned int var_3;	/* UnInitialized  Data Segment */
char *buffer1 = NULL; /* Initialized Data Segment */

void robot_move_left(void);
void print_number(int number);
/* End Global declaration section */

/* Start Main Program Section */
int main()
{
    unsigned int var_11;	/* Allocated in the "Stack" frame of main() function */
    unsigned int var_22 = 30;	/* Allocated in the "Stack" frame of main() function */
	buffer1  = (char*)malloc(sizeof(char)*20);
	char *buffer2 = NULL;
	buffer2 = (char*)malloc(sizeof(char)*20);
    robot_move_left();
    print_number();
    return 0;
}
/* End Main Program Section */

/* Start User Define Functions Section */

/**
  * @brief  This function will move the robot left.
  * @param  None
  * @retval None
  */
void robot_move_left(void){
    int l_value = 66;	/* Allocated in the "Stack" frame of robot_move_left() function */
    printf("Robot move left\n");
}

/**
  * @brief  This function will print the input number.
  * @param  number number to be print
  * @retval None
  */
void print_number(int number){ /* Allocated in the "Stack" frame of print_number() function */
    int l_value = 66;	/* Allocated in the "Stack" frame of print_number() function */
    printf("number = %i\n", number);
}
/* Start User Define Functions Section */

/****************************************************************
				     	Revision History
****************************************************************/
/*
	* MM/DD/YYYY	  Name						Task Number		Description
	* ----------	  -------------------		-----------	    -----------------------------
	* 12/08/2014	  Ahmed Abd El-Ghafar		JIRA-51247        Initial Creation
*/
