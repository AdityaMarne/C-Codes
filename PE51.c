/*
Date : 17-10-2021

Program Exercise 5.1 : Write a program to determine whether a given number is 'odd' or 'even' and print
					   the message Number is Even or Number is Odd. 
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num,odd,even;
	
	input:
		printf("Enter a number :\n");
		printf("To stop the pro enter negative number(-1).\n\n");
		scanf("%d",&num);
		
		if (num < 0) goto stop;
		if (num % 2 == 0)
			printf("Number is Even.\n\n");
		else 
			printf("Number is Odd.\n\n");
	goto input;
	stop:
		printf("End of Program");
}
