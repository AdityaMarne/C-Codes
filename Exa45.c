/*
Date : 28-09-2021

Example 4.5 : Reading of real numbers (in both decimal point and exponential notation)
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	float x,y;
	double p,q;
	
	printf("Values of x and y :");
	scanf("%f %e",&x,&y);
	printf("/n");
	printf("x = %f\ny = %f\n\n",x,y);
	
	printf("Values of p and q :");
	scanf("%1f %1f",&p,&q);
	printf("\n\np = %.12f\nq = %.12e",p,q);
}
