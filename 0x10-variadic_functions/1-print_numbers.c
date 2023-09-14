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
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, const unsigned int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
