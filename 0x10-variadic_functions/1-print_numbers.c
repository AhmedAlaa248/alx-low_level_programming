#include "variadic_functions.h"

/**
 * print_numbers - change pointer value
 *
 * @n : counter parameter
 * @separator : string parameter
 * @...: the integers to sum
 *
 * Return: the integer
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(list, const unsigned int),
				i ? (separator ? separator : "") : "\n");

	va_end(list);

}
