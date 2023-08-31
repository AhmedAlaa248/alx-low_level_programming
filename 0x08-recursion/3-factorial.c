#include "main.h"

/**
 * factorial - change pointer value
 *
 * @n : int parameter
 *
 * Return: Always 0 (Success)
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

