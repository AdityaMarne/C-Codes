/*
Date : 16-09-2021

Exa 3.2 : Print a sequence of squares of numbers.

Note : the use of shorthand operator *=.
*/

#include<stdio.h>
#include<stdlib.h>
#define N 1000
#define A 2

main()
{
	
	int a;
	
	a = A;
	while( a < N )
	{
		printf("%d\n",a);
		a *= a;
	}
}
