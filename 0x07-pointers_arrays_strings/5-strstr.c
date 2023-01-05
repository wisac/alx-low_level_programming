#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int index;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (index = 0; needle[index] != '\0'; index++)
			{
				if (haystack[i + index] != needle[index])
					break;
			}
			if (needle[index] == '\0')
				return (haystack + i);
		}

	}
	return ('\0');
}
