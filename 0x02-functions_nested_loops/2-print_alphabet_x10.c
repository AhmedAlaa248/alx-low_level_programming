

#include "main.h"





















/**
 * print_alphabet - function that prints the alphabet in lowercase 10times
 *
*/











void print_alphabet(void)

{


	int i;
	for (i = 0; i < 10; i++)
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

