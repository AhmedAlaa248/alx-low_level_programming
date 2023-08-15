#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void);

int main (void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
