#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: number arguments passed
 * @argv: array of strings arguments passed
 *
 * Return: 0 (success)
 */

int main(int argc,char *argv[])
{	
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

