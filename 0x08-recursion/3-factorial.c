#include "main.h"
#include <string.h>
/**
 * factorial - computes the factorial a number
 * @n: Factorial to be calculated
 * Return: -1 (if n is negative), factorial (otherwise)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * (factorial(n - 1)));
}
