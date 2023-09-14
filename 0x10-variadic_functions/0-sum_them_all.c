#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = n;

	va_list valist;

	va_start(valist, n);

	while (i--)
	{
		if (n != 0)
		{
			sum += va_arg(valist, const unsigned int);
		}
		else
		{
			return (0);
		}
	}
	va_end(valist);
	return (sum);
}
