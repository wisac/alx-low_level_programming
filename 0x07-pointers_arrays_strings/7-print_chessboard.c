#include "main.h"
/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int index;

	for (i = 0; i < 8; i++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[i][index]);
		}
		_putchar('\n');
	}
}
