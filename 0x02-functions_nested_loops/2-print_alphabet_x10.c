

#include <main.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase 10times
 *
 * Return: Always 0 (Success)
*/










void print_alphabet(void)
{
	for (int i = 0; i < 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{

			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}

