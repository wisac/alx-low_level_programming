#include "main.h"

/**
 *_puts_recursion - Prints a string
 *
 *@s: Pointer to first char in string
 */

void _puts_recursion(char *s)
{
	char i = 0;

	char nullChar = '\0';

	if (*s != nullChar)
	{
		_putchar(*s);

		s++;
		i++;

		_puts_recursion(s);
	}
	_putchar('\n');
}
