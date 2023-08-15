#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints all diffrenet possible
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int i = 0, i2;

	while (i <= 9)
	{
		i2 = 0;
		while (i2 < 0)
		{
			if (i != i2 && i < i2)
			{
				putchar(i + 48);
				putchar(i2 + 48);

				if (i + i2 != 17)
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

