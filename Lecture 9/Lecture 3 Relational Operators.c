/***********************************
File		: application.c
Description	: This is the main application
***********************************/

/* Start Linking Section */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/* End Linking Section */

/* Start Global declaration section */
int number1, number2; /* Fixed point data */
/*
    * Fixed point data is what we call as the integer with some sort of scaling factor.
        - For example: 3.14 will be 314 with a scaling factor of 100
        - 2.3456 can be rounded to 2.345 to achieve a fixed number of digits (Not Good all the Time)
    * Double is more precise than float and can store 64 bits
*/

float var1 = 2.1;   /* %0.16f */ /* 2.0999999046325684 */
double var2 = 2.1;  /* %0.16f */ /* 2.1000000000000001 */
double var3 = 2.1f; /* %0.16f */ /* 2.0999999046325684 */
float var4 = 5;  /* %0.16f */ /* 5.0000000000000000 */
double var5 = 5; /* %0.16f */ /* 5.0000000000000000 */

/* Precision is only till 6 digits --> number11 is equal to number22 */
float number11 = 3.1434343;    /* %0.16f */ /* 3.1434342861175537 */
float number22 = 3.1434343333; /* %0.16f */ /* 3.1434342861175537 */

/* Typecasting every time we write the number in float */
float number11_f = (float)3.1434343;    /* %0.16f */ /* 3.1434342861175537 */
float number22_f = (float)3.1434343333; /* %0.16f */ /* 3.1434342861175537 */

/* To avoid the typecasting every time we write the number in float
   We can suffix the number with ‘f’ or 'F' */
float number11_suffix = 3.1434343f;    /* %0.16f */ /* 3.1434342861175537 */
float number22_suffix = 3.1434343333F; /* %0.16f */ /* 3.1434342861175537 */

/* Precision is up to 15 digits --> number33 is not equal to number44 */
double number33 = 3.1434343;    /* %0.16f */ /* 3.1434343000000000 */
double number44 = 3.1434343333; /* %0.16f */ /* 3.1434343333000001 */
/* End Global declaration section */

/* Start Main Program Section */
int main()
{
    printf("Enter Number 1, Number 2 : ");
    /* Ask the the user to enter two numbers */
    scanf("%i%i", &number1, &number2);

    /* Checks if the values of two operands are equal or not.
       If yes, then the condition becomes true. */
    printf("%i == %i = %i\n", number1, number2, number1 == number2);
    /* Checks if the values of two operands are equal or not.
       If the values are not equal, then the condition becomes true. */
    printf("%i != %i = %i\n", number1, number2, number1 != number2);
    /* Checks if the value of left operand is greater than the value of right operand.
       If yes, then the condition becomes true. */
    printf("%i > %i = %i\n", number1, number2, number1 > number2);
    /* Checks if the value of left operand is less than the value of right operand.
       If yes, then the condition becomes true. */
    printf("%i < %i = %i\n", number1, number2, number1 < number2);
    /* Checks if the value of left operand is greater than or equal to the value of right operand.
       If yes, then the condition becomes true. */
    printf("%i >= %i = %i\n", number1, number2, number1 >= number2);
    /* Checks if the value of left operand is less than or equal to the value of right operand.
       If yes, then the condition becomes true. */
    printf("%i <= %i = %i\n", number1, number2, number1 <= number2);

    printf("=======================\n");

    /* Best Practice to avoid using "Equality Operator" */
    if(5 == number1){
        printf("Yes1\n"); /* Will Print Yes1*/
    }
    else{
        printf("No1\n");
    }

    printf("=======================\n");

    float number3 = 5;
    double number4 = 5;
    /* Not Good Practice */
    if(number3 == number4){
        printf("Yes2\n"); /* Will Print Yes2*/
    }
    else{
        printf("No2\n");
    }

    printf("=======================\n");

    float number5 = 5.1;  /* floating point data */
    double number6 = 5.1; /* floating point data */
    /* Not Good Practice */
    if(number5 == number6){
        printf("Yes3\n");
    }
    else{
        printf("No3\n"); /* Will Print No3*/
    }

    printf("=======================\n");

    float number7 = 5.1;  /* floating point data */
    double number8 = 5.1f; /* floating point data */
    /* Not Good Practice */
    if(number7 == number8){
        printf("Yes4\n"); /* Will Print Yes4*/
    }
    else{
        printf("No4\n");
    }

    return 0;
}
/* End Main Program Section */

/****************************************************************
				     	Revision History
****************************************************************/
/*
	* MM/DD/YYYY	  Name						Task Number		Description
	* ----------	  -------------------		-----------	    -----------------------------
	* 12/08/2014	  Ahmed Abd El-Ghafar		JIRA-51247        Initial Creation
*/
