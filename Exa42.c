/*
Date : 23-09-2021

Example 4.2 : The program request the user to enter a character and display a message on the
			   screen telling the user whether the character is an alphabet or digit, or any
			   other special character.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
	char character;
	printf("Press any key :\n");
	character = getchar();
	if(isalpha(character) > 0)
		printf("The character is a letter.");
	else
		if(isdigit(character) > 0)
			printf("The character is a digit.");
		else
			printf("The character is not a alphanumeric.");
}
