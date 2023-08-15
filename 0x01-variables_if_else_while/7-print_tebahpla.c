#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}

