#include "main.h"
/**
 *_strcat - Concatenate two strings
 *
 *@dest: one of the strings
 *@src: the other string being added
 *
 *Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	char end1 = '\0';

	char *index1 = src;

	char *index2 = dest;

	int len1 = 0, len2 = 0, i = 0;

	while (*index1 != end1)
	{
		len1++;
		index1++;
	}

	while (*index2 != end1)
	{
		len2++;
		index2++;
	}

	while (src[i] != end1)
	{
		dest[len2] = src[i];
		len2++;
		i++;
	}
	dest[len2] = end1;
	return (dest);
}






