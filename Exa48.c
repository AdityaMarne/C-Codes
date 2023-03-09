/*
Date : 29-09-2021

Example 4.8 : The program testing for corrrectenss of rading of data by scanf function.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a;
	float b;
	char c;
	printf("Enter values of a, b and c :\n");
	if(scanf("%d %f %c",&a,&b,&c) == 3)
	{
		printf("a = %d b = %f c = %c",a,b,c);
	}
	else
	{
		printf("error in input.\n");
	}
}

