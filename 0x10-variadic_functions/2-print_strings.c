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
		str = va_arg(list, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
			printf("nil");
		if (i)
		{
			if (separator)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(list);
}
