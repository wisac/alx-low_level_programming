#include "main.h"
/**
 *print_rev - prints a string
 *to stdout in reverse order
 *
 *@s : string to be printed
 */
void print_rev(char *s)
{
	char strEnd = '\0';

	int i = 0;

	int j = 0;

	int length = 0;

	while (s[i] != strEnd)
	{
		length++;
		i++;
	}

	length--;
	while (length >= j)
	{
		_putchar((s[length]));
		length--;
	}
	_putchar('\n');
}
