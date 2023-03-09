/*
Date : 17-10-2021

Case-Studies 5.2 :

problem : A manufacturing company has classified its execution into four levels for the benefit of certain perks.
		  The levels and corredponding perks are shown below :
		  
		  Level						Perks
		  			Conveyance allowance 		Entertainment allowance
		  1				1000						500
		  2				750							200
		  3				500							100
		  4				250							---
		  An executive's gross salary includes basic pay, house rent allowance at 25% of basic pay and other perks.
		  Income tax is withhels from the salary on a percentage basis as follows :
		  		Gross Salary					Tax Rate
		  		Gross<=2000					No tax deduction
		  		2000<Gross<=4000				  3%
		  		4000<Gross<=5000				  5%
		  		Gross>5000						  8%
		  Write a program that will read an executive's job number, level number, and basic pay and then compute the 
		  net salary after withholding income tax.
		  
Problem analysis :
	Gross salary = basic pay + house rent allowance + perks
	Net salary = Gross salary - income tax.
	The computation of perks depends on the level, while the income tax depends on the gross salary. The major steps are:
		1. Read data
		2. Decide level number and calculate perks.
		3. Calculate gross salary.
		4. Calculate income tax.
		5. Compute net salary.
		6. Prints the results.
		
Program :  A program and the results of the test data are given. Note the last statement should be an executable statement.
			This is the label stop: cannot be the last line.
*/

#include <stdio.h>
#include <stdlib.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0

main()
{
	int level, jobnumber;
	float gross,basic,house_rent,perks,net,incometax;
	
	input:
		printf("\nEnter level, job number and basic pay :\n");
		printf("Enter 0(zero) for level to END : \n\n");
		scanf("%d",&level);
		
		if (level == 0) goto stop;
		scanf("%d %f",&jobnumber, &basic);
		switch(level)
		{
			case 1:
				perks = CA1 + EA1;
				break;
			case 2:
				perks = CA2 + EA2;
				break;
			case 3:
				perks = CA3 + EA3;
				break;
			case 4:
				perks = CA4 + EA4;
				break;
			default:
				printf("Error in level code\n");
				goto stop;
		}
		house_rent = 0.25 * basic;
		gross = basic + house_rent + perks;
		if (gross <= 2000)
			incometax = 0;
		else if (gross <= 4000)
			incometax = 0.03*gross;
		else if (gross <= 5000)
			incometax = 0.05 * gross;
		else
			incometax = 0.08 * gross;
		net =  gross- incometax;
		printf("%d %d %.2f\n",level, jobnumber, net);
		goto input;
		stop:
			printf("\n\nEnd of The Program.");
}