#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: Always n (Success)
*/

void times_table(void)
{

	int n, multi, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = n * multi;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);

			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
