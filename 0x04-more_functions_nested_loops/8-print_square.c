#include "main.h"

/**
 * print_square - function that prints the alphabet in lowercase
 *
 * @size : checks the input
 *
 * Return: returns 0
*/

void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
