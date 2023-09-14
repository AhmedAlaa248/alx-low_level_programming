#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - change pointer value
 *
 * @n : counter parameter
 * @...: the integers to sum
 *
 * Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...);
{
	va_list a;
	unsigned int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);
	return (sum);
}

