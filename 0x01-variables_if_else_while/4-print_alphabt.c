#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase, except e
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}

