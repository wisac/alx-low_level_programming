#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int index2;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (index2 = 0; s[index2] != '\0'; index2++)
		{
			if (s[i] == accept[index2])
			{
				result++;
				break;
			}
		}
		if (s[index2] == '\0')
			return (result);
	}
	return (result);
}
