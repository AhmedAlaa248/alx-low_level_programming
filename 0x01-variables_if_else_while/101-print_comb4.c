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
	int i = 0, i2, i3;

	while (i <= 9)
	{
		i2 = 0;
		while (i2 <= 9)
		{
			i3 = 0;
			while (i3 <= 9)
			{
				if (i != i2 && i < i2
				    i2 != i3 && i2 < i3)
				{
					putchar(i + 48);
					putchar(i2 + 48);
					putchar(i3 + 48);

					if (i + i2 + i3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i3++;
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

