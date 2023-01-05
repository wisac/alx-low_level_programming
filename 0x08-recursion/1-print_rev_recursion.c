#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - Prints a string in reverse
 *
 *@s: Pointer to first char in string
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
