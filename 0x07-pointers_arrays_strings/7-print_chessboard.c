#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int iteration, je = 0;

	for (iteration = 0; iteration < 64; iteration++)
	{
		if (iteration % 8 == 0 && iteration != 0)
		{
			je = iteration;
			_putchar('\n');
		}
		_putchar(*a[iteration / 8][iteration - je]);
	}
	_putchar('\n');
}
