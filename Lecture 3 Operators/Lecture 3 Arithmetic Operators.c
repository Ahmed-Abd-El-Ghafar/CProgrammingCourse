/***********************************
File		: application.c
Description	: This is the main application
***********************************/

/* Start Linking Section */
#include <stdio.h>
#include <stdlib.h>
/* End Linking Section */

/* Start Global declaration section */
int number1, number2;
/* End Global declaration section */

/* Start Main Program Section */
int main()
{
    printf("Enter Number 1, Number 2 : ");
    scanf("%i%i", &number1, &number2);

    printf("%i + %i = %i\n", number1, number2, number1+number2);
    printf("%i - %i = %i\n", number1, number2, number1-number2);
    printf("%i / %i = %0.2f\n", number1, number2, (float)number1/ (float)number2);
    printf("%i * %i = %i\n", number1, number2, number1*number2);
    printf("%i %% %i = %i\n", number1, number2, number1%number2);

    printf("=======================\n");

    printf("Number1++ = %i\n", number1);
    number1++;
    printf("Number1 = %i\n", number1);
    ++number1;
    printf("++Number1 = %i\n", number1);
    number1--;
    printf("Number1-- = %i\n", number1);
    --number1;
    printf("--Number1 = %i\n", number1);

    printf("=======================\n");

    /*
        1) result1 = number1++; -> result1 = 3 + number1++; -> number1 = 4
        2) ++number1 -> number1 = 5
        3) result1 = 3 + 5 = 8
    */
    number1 = 3;
    int result1 = number1++ + ++number1;
    printf("result1 = %i\n", result1);
    printf("Number1 = %i\n", number1);
    printf("=======================\n");

    /*
        1) result1 = ++number1; -> ++number1 -> number1 = 4
        2) result1 = 4 + number1++; -> result1 = 4 + 4 = 8
        3) number1++ = 5
    */
    number1 = 3;
    int result2 = ++number1 + number1++;
    printf("result2 = %i\n", result2);
    printf("Number1 = %i\n", number1); /* number1 = 5 */
    printf("=======================\n");

    /*
        1) result1 = number1++; -> result1 = 3 + number1++; -> number1 = 4
        2) result1 = 3 + 4 = 7 & number1 = 5
    */
    number1 = 3;
    int result3 = number1++ + number1++;
    printf("result3 = %i\n", result3);
    printf("Number1 = %i\n", number1); /* number1 = 5 */

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
