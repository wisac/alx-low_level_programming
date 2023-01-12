#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - allocates memory on the heap for int
 *@b:amount of memory to be allocated
 *
 *Return: 98 (if malloc fails), pointer to the array
 */

void *malloc_checked(unsigned int b)
{

	char *letter;

	letter = malloc(b);
	if (letter == NULL)
	{
		exit(98);
	}
	else
	{
		return (letter);
	}
}
