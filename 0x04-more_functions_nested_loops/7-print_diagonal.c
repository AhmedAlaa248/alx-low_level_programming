#include "main.h"

/**
 * print_diagonal - function that prints the alphabet in lowercase
 *
 * @n : checks the input
 *
 * Return: returns 0
*/

void print_diagonal(int n)
{
	int i, j;

	if (n >= 0)
		for (i = 0; i < n; i++)
		{
		_putchar(92);
		if (i > 0)
			_putchar('\n');
			for (j = 0; j <= i; j++)
				_putchar(' ');
		}
	_putchar('\n');
}
