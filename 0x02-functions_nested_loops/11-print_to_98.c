#include "main.h"

/**
 * Description: A C program that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Always n (Success)
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	else
		for (i = n; i < 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}

	_putchar('\n');
}