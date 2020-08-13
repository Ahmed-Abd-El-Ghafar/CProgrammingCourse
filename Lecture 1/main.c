/***********************************
File		: application.c
Description	: This is the main application
***********************************/

/* Start Linking Section */
#include <stdio.h>
#include "application.h"
/* End Linking Section */

/* Start Definetion section */
#define PI 3.14
/* End Definetion section */

/* Start Global declaration section */
unsigned int var = 55;                                 /* global variable with initialization */
unsigned int _var, var_, v_a_r, __var;                 /* no initialization here to variable  by default zeros */
unsigned int number_one, numberOne, numberOne_;
unsigned int number1, number1One;
unsigned int Summing, numberOne, numberTwo;

char number__0 = 11;
unsigned char number__1 = 11;
signed char number__2 = 11;

short number__6 = 11;
unsigned short number__7 = 11;
signed short number__8 = 11;

int number__3 = 11;
unsigned int number__4 = 11;
signed int number__5 = 11;

long number__9 = 11;
unsigned long number__10 = 11;
signed long number__11 = 11;

void robot_move_left(void);                    /* functions prototype ______declaration */
void robot_move_right(void);
void robot_move_forward(void);
/* End Global declaration section */

/* Start Main Program Section */
int main(){
    /* Start main application */
    var = var * 5;
    Summing = numberOne + numberTwo;             /* summing here equal zero because numberOne and numberTow are equal zeros*/

    robot_move_left();
    robot_move_right();                          /*function caller */
    robot_move_forward();

    printf("Hello Embedded Systems Diploma G20\n\n");      /* \n backslash character here means newline*/
    printf("Hello Embedded Systems Diploma G21\n\n");
    printf("Hello Embedded Systems Diploma G21\n\a");      /* \a sound beeeeeb _____alarm*/
    printf("My phone number : 5\a6\a7\a\n");
    printf("Hi\tI am\tAhmed\n");                          /*\t means horizontal space */
    printf("\"Hi\tI am\tAhmed\"\n");
    printf("\\Hi\tI am\tAhmed\\\n");
    printf("\\\"Welcome\"\\\n\a"); /* This line is to print Welcome */
    printf("We are spark ES\
           group\n");
    printf("We are spark ES\t"),printf("group\n");

    printf("Size of %d\t%d\t%d\n",sizeof(number__0),sizeof(number__1),sizeof(number__2));   /*operator sizeof return number of byte of data type */
    printf("Size of %d\t%d\t%d\n",sizeof(number__3),sizeof(number__4),sizeof(number__5));
    printf("Size of %d\t%d\t%d\n",sizeof(number__6),sizeof(number__7),sizeof(number__8));
    printf("Size of %d\t%d\t%d\n",sizeof(number__9),sizeof(number__10),sizeof(number__11));

    /* End main application */
    return 0;
}
/* End Main Program Section */

/* Start User Define Functions Section */

/**
  * @brief  This function will move the robot left.
  * @param  None
  * @retval None
  */
void robot_move_left(void){                            /* function definition */
    int l_value = 66;
    printf("Robot move left\n");
}

/**
  * @brief  This function will move the robot right.
  * @param  None
  * @retval None
  */
void robot_move_right(void){                             /* function definition */
    printf("Robot move right\n");
}

/**
  * @brief  This function will move the robot forward.
  * @param  None
  * @retval None
  */
void robot_move_forward(void){
    printf("Robot move forward\n");
}
/* Start User Define Functions Section */

/****************************************************************
				     	Revision History
****************************************************************/
/*
	* MM/DD/YYYY	  Name						Task Number		Description
	* ----------	  -------------------		-----------	    -----------------------------
	* 12/08/2014	  Ahmed Abd El-Ghafar		SR-51247        Initial Creation
	* 12/09/2014	  Ahmed Abd El-Ghafar		SR-51248        Adding Variable "var"
	* 12/09/2014	  Ahmed Abd El-Ghafar		SR-51246        Adding robot_move_forward
	* 15/7/2022     Bassam Khamis mansour            SR-51276        add some comment and illustrate
*/
