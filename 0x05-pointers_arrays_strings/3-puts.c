#include "main.h"

/**
 * _puts - change pointer value
 *
 * @str : char parameter
 *
 * Return: Always 0 (Success)
*/

void _puts(char *str)
{


	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

