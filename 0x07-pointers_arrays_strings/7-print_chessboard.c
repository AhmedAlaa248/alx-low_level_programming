#include "main.h"

/**
 * print_chessboard - change chessboard
 *
 * @a : char parameter
 *
 * Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int itr, j;

	for (itr = 0; itr < 8; itr++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[itr][j]);
		}
		_putchar('\n');
	}
}

