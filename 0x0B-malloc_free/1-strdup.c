#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - duplicates a string
 *@str: string to be copied
 *
 *Return: NULL (if str is NULL or has insufficient memory allocated);
 *pointer to the duplicated string(success)
 */

char *_strdup(char *str)
{
	char *newString = NULL;

	unsigned int length;

	/*Check if NULL is passed as args*/
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		length = strlen(str);
	}

	/*Allocating memory for a string with null char*/
	newString = malloc(length + 1);

	/*Check if malloc failed*/
	if (newString == NULL)
	{
		return (NULL);
	}

	/*Copy str and check if its successful*/
	if (strcpy(newString, str))
	{
		return (newString);
	}
	else
	{
		return (NULL);
	}
}
