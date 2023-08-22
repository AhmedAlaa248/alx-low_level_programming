#include "main.h"

/**
 * print_array  -  a function that prints n elements of an array of integers
 *
 * @a : int parameter
 * @n : int parameter
 *
 * Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
