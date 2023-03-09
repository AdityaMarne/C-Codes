/*
Date : 29-09-2021

Example 4.9 : The program output of integer numbers under various formats.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int m = 12345;
	long n = 987654;
	
	printf("%d\n",m);
	printf("%10d\n",m);
	printf("%010d\n",m);
	printf("%-10d\n",m);
	printf("%10ld\n",n);
	printf("%10ld\n",-n);
}
