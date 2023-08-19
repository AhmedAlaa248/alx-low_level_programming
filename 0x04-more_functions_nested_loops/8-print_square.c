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

	if (n > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			if (i != size - 1)
				_putchar('\n');
		}
	_putchar('\n');
}
