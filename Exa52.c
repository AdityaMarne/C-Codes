/*
Date : 30-09-2021

Example 5.2 : The program counts the number of boys whose weight is less than 50kg
				and height is greater than 170cm. 
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int count,i;
	float weight, height;
	
	count = 0;
	printf("Enter weight and height for 10 boys : \n");
	
	for(i = 1;i <= 10; i++)
	{
		scanf("%f %f",&weight,&height);
		if(weight < 50 && height > 170)
			count = count + 1;
	}
	printf("Number of boys with weight < 50kg and height > 170cm = %d\n",count);
}
