/*
Date : 17-10-2021

Case Studies 5.1 : 

Problem : A survey of the computer market shows that personal computers are sold at varying costs by 
		  the vendor. The following is the list of costs (in hundreds) quoted by some vendors:
				   35.00,	40.50,	25.00,	31.25,	68.15,
				   47.00,	26.65,	29.00,	53.45,	62.50
		Determine the average cost and the range of values.

Problem anaysis : Range is one of the meaasures of dispersion used in statistical analysis of a series
				  of values. The range of any series is the difference between the highest and the lowest values
				  in the series. That is
				  		Range = highest value - lowest value
				  It is therefore necessary to find the highest and the lowest values in the series.
				  
Program : A program to determine the range of values and the average cost of a personal computer in the market 		    
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int count;
	float value, high, low, sum, average, range;
	sum = 0;
	count = 0;
	
	printf("Enter numbers in line : input a NEGATIVE number to end\n" );
	
	input:
		scanf("%f",&value);
		
		if (value < 0) goto output;
			count = count + 1;
		if (count == 1)
			high = low = value;
		else if (value > high)
			high = value;
		else if (value < low)
			low = value;
		sum = sum + value;
		goto input;
		
	output:
		average = sum/count;
		range = high - low;
		
		printf("\n\n");
		
		printf("Total values : %d\n",count);
		printf("Highest-value : %f\nLowest-value : %f\n",high,low);
		printf("Range : %f\nAverage : %f\n",range,average); 
}
