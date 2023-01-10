#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate two strings
 *@s1: string one
 *@s2: string two to be concatenated to s1
 *Return: NULL (if concatenation failed);
 *pointer to the concatenated string(success)
 */
char *str_concat(char *s1, char *s2)
{	char *newString = NULL;

	unsigned int length;

	char option;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 != NULL && s2 == NULL)
	{	length = strlen(s1);
		option = 'B';
	}
	else if (s1 == NULL && s2 != NULL)
	{	length = strlen(s2);
		option = 'C';
	}
	else
	{
		length = strlen(s1) + strlen(s2);
		option = 'D';
	}
	newString = malloc(length + 1);
	if (newString == NULL)
		return (NULL);
	switch (option)
	{	case 'B':
			(strcpy(newString, s1));
			break;
		case 'C':
			(strcpy(newString, s2));
			break;
		case 'D':
			if (strcat((strcpy(newString, s1)), s2))
			break;
		default:
			break;
	}
	return (newString);
}
