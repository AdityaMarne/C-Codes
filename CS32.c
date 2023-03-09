/*
Date ; 24-09-2021

Case Studies 3.2
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float a,b,c,discriminant,root1,root2;
	
	printf("Input values of a,b and c :\n");
	scanf("%f %f %f",&a,&b,&c);
	
	discriminant = b*b - 4*a*c;
	if(discriminant < 0)
	{
		printf("\n\nRoots are Imaginary\n");
	}
	else
	{
		root1 = (-b + sqrt(discriminant))/(2.0*a);
		root2 = (-b - sqrt(discriminant))/(2.0*a);
		printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f",root1,root2);
	}
}
