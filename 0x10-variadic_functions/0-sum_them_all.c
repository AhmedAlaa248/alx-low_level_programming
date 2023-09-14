#include ".variadic_functions.h"

/**
 * sum_them_all - change pointer value
 *
 * @n : counter parameter
 *
 * Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...);
{
	va_list a;
	int sum = 0, i;

	if (!n)
		return (0);

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}

	va_end(a);

	return (sum);
}

