/*
Date : 29-09-2021

Example 4.11 : Printing of characters and strings.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	char x = 'A';
	char name[20] = "ANIL KUMAR GUPTA";
	
	printf("Output of characters\n\n");
	printf("%c\n%3c\n%5n\n",x,x,x);
	printf("%3c\n%c\n",x,x);
	printf("\n");
	
	printf("Output of strings\n\n");
	printf("%s\n",name);
	printf("%20s\n",name);
	printf("%20.10s\n",name);
	printf("%.5s\n",name);
	printf("%-20.10s\n",name);
	printf("%5s\n",name);
}
