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

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

