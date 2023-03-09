/*
Date : 07-10-2021

Example 5.7 : Program presented illustrates the use of the goto statement.
			  The program evaluates the square root for five numbers. The variable count keeps 
			  the count of numbers read. When count is less than or equal to 5. goto read; directs
			  the control to the label read; otherwise, the program prints a message and stops.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	double x,y;
	int count;
	count = 1;
	
	printf("Enter FIVE real values in a LINE :\n");
	read:
		while (count <= 5)
		{
			scanf("%lf",&x);
			printf("\n");
			if(x < 0)
			{
				printf("Value -%d is negative.\n",x);
			}
			else
			{
				y = sqrt(x);
				printf("%lf\t %lf\n",x,y);
			}
			count = count + 1;
		}
		goto ans;
	goto read;
	ans:
		printf("\nEnd of cmputation");
}
