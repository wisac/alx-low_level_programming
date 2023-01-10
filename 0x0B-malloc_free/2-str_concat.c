#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenate two strings
 *
 *@s1: string one
 *@s2: string two to be concatenated to s1
 *Return: NULL (if concatenation failed);
 *pointer to the concatenated string(success)
 */

char *str_concat(char *s1, char *s2)
{
	char *newString = NULL;

	char option;

	unsigned int length;

	/*Check if NULL is passed as args*/
	if (s1 == NULL && s2 == NULL )
	{
		option = 'A';
	}
	
	else if (s1 != NULL && s2 == NULL)
	{	
		length = strlen(s1);
		option = 'B';

	}

	else if (s1 == NULL && s2 != NULL)
	{
		length = strlen(s2);
		option = 'C';
	}
	else
	{
		length = strlen(s1) + strlen(s2);
		option = 'D';
	}
	

	/*Allocating memory for a string with null char*/
	newString = malloc(length + 1);

	/*Check if malloc failed*/
	if (newString == NULL)
	{
		return (NULL);
	}

	/*Copy str and check if its successful*/
	switch(option)
	{
		case 'A':
			return (NULL);
			break;
		case 'B':
			if (strcpy(newString, s1))
			break;
		case 'C':
			if (strcpy(newString, s2))
			break;
		case 'D':
			if (strcat((strcpy(newString, s1)), s2))
			break;
		default:;

	}

	return (newString);
}
