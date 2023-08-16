#include "main.h"





/**
 * print_last_digit - function that prints the alphabet in lowercase
 *
 * @n : checks input of function
 *
 * Return: returns 1 if 'c'
*/




int print_last_digit(int n)
{
	int LD;

	if (n < 0)
		LD = -1 * (n % 10);
	else
		LD = n % 10;

	_putchar(LD + '0');

	return (LD);
}
