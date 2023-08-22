#include "main.h"

/**
 * swap_int - swaps the values of two integer
 *
 * @a : int parameter
 * @b : int parameter
 *
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
