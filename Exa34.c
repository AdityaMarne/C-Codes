/*
Date : 22-09-2021

Exa 3.4 : Illustrate the use of variable in expression and their evaluation.

*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	float a,b,c,x,y,z;
	
	a = 9;
	b = 12;
	c = 3;
	
	x = a - b / 3 + c * 2 - 1;
	y = a - b / (3 + c) * (2 - 1);
	z = a - (b / (3 + c) * 2) - 1;
	
	printf("x = %f\n",x);
	printf("y = %f\n",y);
	printf("z = %f\n",z);
}
