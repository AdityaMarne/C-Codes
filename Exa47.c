/*
Date : 28-09-2021

Example 4.7 : The program illustrate the function of %[] specification.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	char address[80];
	
	printf("Enter address :\n");
	scanf("%[a-z]",address);
	printf("%-80s\n\n",address);
}
