#include "main.h"

/**
 * more_numbers - function that prints the alphabet in lowercase
 *
 * Return: returns 0
*/

void more_numbers(void)
{

	int i, j, currentNum;

	for (j = 0; j < 10; j++)
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
