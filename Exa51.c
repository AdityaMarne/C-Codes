/*
Date : 30-09-2021

Example 5.1 : The program reads four values a,b,c and d from the terminal and evaluates 
				the ratio of (a+b) to (c-d) and prints the result, if c-d is not equals to
				zero.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,b,c,d;
	float ratio;
	
	printf("Enter four integers values :\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if ((c-d) == 0)
	{
		printf("Numbers can't be divided by 0.");
	}
	else 
	{
		ratio = (float)(a+b) / (float)(c-d);
		printf("Ratio :%d",&ratio);
	}
}
