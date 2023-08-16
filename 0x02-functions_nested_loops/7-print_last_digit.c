#include <main.h>

/**
 * main - Entery point
 *
 * Description: A C program that computes the absolute value of an integer.
*
 * Return: Always n (Success)
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
