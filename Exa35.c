/*
Date : 23-09-2021

Exa 3.5 : Round-off errors that can occur in computation of floating point numbers. 

*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float sum,n,term;
	int count = 1;
	
	sum = 0;
	printf("Enter value of n\n");
	
	scanf("%f",&n);
	term = 1.0/n;
	while(count <= n)
	{
		sum = sum +term;
		count++;
	}
	printf("Sum = %f\n",sum);
}
