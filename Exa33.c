/*
Date  : 16-09-2021

Exa 3.3 : Program employs different kinds of operators. The result of their evaluation are also shown for comparison.

*/

#include <stdio.h>
#include <stdlib.h>

main()
{

	int a,b,c,d;
	
	a = 15;
	b = 10;
	c = ++a - b;
	
	printf("a = %d b = %d c = %d\n",a,b,c);
	
	d = b++ + a;
	
	printf("a = %d b = %d d= %d\n",a,b,d);
	
	printf("a/b = %d\n",a/b);
	
	printf("a%%b = %d\n",a%b);
	
	printf("a *= b = %d\n",a*=b);
	
	printf("%d\n",(c>d) ? 1:0);
	
	printf("%d\n",(c<d) ? 1:0);
		
}
