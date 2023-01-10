#include <stdlib.h>
#include "main.h"

/**
 *create_array - Create an array of characters
 *@size: size of the array
 *@c: initial value for each index
 *
 *Return: NULL (if size = 0 or if fails to create array);pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}
	/*Allocating memory for a char of size 'size'*/
	array = malloc(size);

	/*Check if malloc failed*/
	if (array == NULL)
	{
		return (NULL);
	}


	/*initializing each element array with c*/
	while (index < size)
	{
		*(array + index) = c;
		index++;
	}

	return (array);
}
