#include "main.h"

/**
 * print_line - function that prints the alphabet in lowercase
 *
 * @n : checks the input
 *
 * Return: returns 0
*/

void print_line(int n)
{
	int i;

	if (n >= 0)
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
	_putchar('\n');
}
