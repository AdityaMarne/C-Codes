/*
Date : 23-09-2021

Exa 3.6 : A program using a cast to evaluate the equation
				
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float sum;
	int n;
	
	sum = 0;
	
	for(n = 1;n <= 10;++n)
	{
		sum = sum + 1/(float)n;
		printf("%2d %6.4f\n",n,sum);
	}
}
