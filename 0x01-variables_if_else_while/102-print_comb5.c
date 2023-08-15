#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints all diffrenet
 * possibleprints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int i = 0, i2;

	while (i <= 99)
	{
		i2 = i;
		while (i2 <= 99)
		{
			if (i != i2)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((i2 / 10) + 48);
				putchar((i2 % 10) + 48);

				if (i != 98 || i2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

