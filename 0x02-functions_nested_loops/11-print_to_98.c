#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line.
 *@n : check input
 * Return: returns 1 if 'c'
*/


void print_to_98(int n)
{

	if (n > 98)
		for (int i = n; i > 98; i--)
			printf("%d,", i);
	else
		for (int i = n; i < 98; i++)
			printf("%d,", i);
	prinf("98\n");
}

























