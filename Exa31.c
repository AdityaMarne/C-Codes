/*
Date : 16-09-2021

Exa 3.1 : User of integer arithmatic to convert a given number of days into months and days.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int months,days;
	
	printf("Enter days :\n");
	scanf("%d",&days);
	
	months = days / 30;
	days = days % 30;
	
	printf("Months = %d Days = %d",months,days);
}

