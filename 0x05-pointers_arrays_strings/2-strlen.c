#include "main.h"
/**
 *_strlen - returns the length
 *of a string
 *@s : pointer to first character
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	char nullChar = '\0';

	int length = 0;

	int i = 0;

	while (s[i] != nullChar)
	{
		length++;
		i++;
	}
	return (length);
}

