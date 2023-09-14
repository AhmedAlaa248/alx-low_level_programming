#include "variadic_functions.h"

/**
 * print_strings - change pointer value
 *
 * @n : counter parameter
 * @...: the integers to sum
 * @separator : char parameter
 * Return: the integer
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	int i = n;
	char *str;
	va_list list;

	va_start(list, n);

	while (i--)
		printf("%s%s", (str = va_arg(list, char*)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");

	va_end(list);
}
