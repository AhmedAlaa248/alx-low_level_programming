#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

