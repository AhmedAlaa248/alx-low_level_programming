#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that  prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');
	return (0);
}

