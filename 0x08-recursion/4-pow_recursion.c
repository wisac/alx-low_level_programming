#include "main.h"
#include <string.h>
/**
 * _pow_recursion - calculate power of a number
 * @x: base
 * @y: index
 * Return: -1 (if y is negative), result (otherwise)
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
