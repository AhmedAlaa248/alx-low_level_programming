#include "main.h"








/**
 * print_sign - function that prints the alphabet in lowercase
 *
 * @n : checks input of function
 *
 * Return: returns 1 if 'n'
*/



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}


}
