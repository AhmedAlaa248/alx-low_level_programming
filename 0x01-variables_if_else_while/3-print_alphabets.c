#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');

	return (0);
}

