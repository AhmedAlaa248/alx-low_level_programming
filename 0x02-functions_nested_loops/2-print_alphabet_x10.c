#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase 10times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void);

int main (void)
{
	print_alphabet_x10();

	return (0);
}

void print_alphabet(void)
{
	for (int i = 0; i < 10; i++)
	{
		char ch = 'a';
	
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}

