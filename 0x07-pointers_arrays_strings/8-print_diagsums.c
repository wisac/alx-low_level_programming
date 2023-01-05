#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal1nal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		diagonal1 += a[(i * size) + i];
		diagonal2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
