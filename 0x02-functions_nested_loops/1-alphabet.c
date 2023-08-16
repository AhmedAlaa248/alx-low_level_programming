#include <main.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the alphabet in lowercase
*
 * Return: Always 0 (Success)
*/


void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')

	{
		_putchar(ch);
		ch++;
	}


	_putchar('\n');

}
