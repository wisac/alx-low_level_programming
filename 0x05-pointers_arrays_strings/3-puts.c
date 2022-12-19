#include "main.h"
/**
 *_puts - prints a string
 *to stdout
 *
 *@str : string to be printed
 */
void _puts(char *str)
{
	char strEnd = '\0';

	int i = 0;

	while ((str[i]) != strEnd)
	{
		_putchar((str[i]));
		i++;
	}
	_putchar('\n');
}
