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
	{
		char *str = va_arg(list, char *);

		switch ((int)(!str))
		case 1:
			str = "(nil)";

		printf("%s%s", separator, str);

	}
	va_end(list);
}
