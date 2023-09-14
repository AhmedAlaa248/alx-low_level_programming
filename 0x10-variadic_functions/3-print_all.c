#include "variadic_functions.h"

/**
 * format_char - change pointer value
 *
 * @list : argument pointer
 * @separator: the string separator
 *
*/

void format_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * format_float - change pointer value
 *
 * @list : argument pointer
 * @separator: the string separator
 *
*/

void format_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * format_int - change pointer value
 *
 * @list : argument pointer
 * @separator: the string separator
 *
*/

void format_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * format_string - change pointer value
 *
 * @list : argument pointer
 * @separator: the string separator
 *
*/

void format_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
	case 1:
		str = "(ni;)";

	printf("%s%s", separator, str);
}


/**
 * print_all - change pointer value
 *
 * @format : the format string
 *
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list list;

	token_t tt[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (tt[j].token)
		{
			if (format[i] == tt[j].token[0])
			{
				tt[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
