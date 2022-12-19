#include "main.h"
/**
 *swap_int - swaps two numbers
 *@a : one number to swapped
 *@b : second number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

