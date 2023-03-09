/*
Date : 23-09-2021

Example 4.1 : TThe use of getchar function in an interactive environment.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	char answer;
	printf("Would you like to know my name :\n");
	printf("Type Y for YES and N for No :");
	answer = getchar();
	if(answer == 'Y' || answer == 'y')
	 printf("\n\nMy name is BUSy BEE\n");
	 else
	  printf("\n\nYou are good for nothing\n");
}
