#include "main.h"

/**
 * print_more_numbers - function that prints the alphabet in lowercase
 *
 * Return: returns 0
*/

void print_more_numbers(void)
{

	int i, j;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');

}
