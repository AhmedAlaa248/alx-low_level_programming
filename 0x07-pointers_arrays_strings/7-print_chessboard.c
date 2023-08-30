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
	unsigned int itr, j;

	for (itr = 0; itr < 64; itr++)
	{
		if (itr % 8 == 0; && itr != 0)
		{
			j = itr;
			_putchar('\n');
		}
		_putchar(*a[itr / 8][itr - j]);
	}
	_putchar('\n');
}

