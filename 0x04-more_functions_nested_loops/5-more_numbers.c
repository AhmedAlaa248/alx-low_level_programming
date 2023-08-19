#include "main.h"

/**
 * print_more_numbers - function that prints the alphabet in lowercase
 *
 * Return: returns 0
*/

void print_more_numbers(void)
{

	int i, j, currentNum;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			currentNum = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				currentNum = i % 10;
			}
			_putchar(currentNum + 48);
		}
		_putchar('\n');
	}

}
