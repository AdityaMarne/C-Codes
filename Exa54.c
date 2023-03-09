/*
Date : 30-09-2021

Exampole 5.4 : The program selects and prints the largest of the three numbers using nested
				if...else statements.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,b,c;
	
	printf("Enter three numbers : \n");
	scanf("%d\n %d\n %d",&a,&b,&c);
	
	if ( a > b)
	{
		if ( a > c)
		 printf("%d is largest.",a);
		else
		 printf("%d is largest.",b);
	}
	else 
	{
		if ( c > b)
		 printf("%d is largest.",c);
		else
		 printf("%d is largest.",b);
	}
}
