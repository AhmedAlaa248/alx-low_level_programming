include "main.h"

/**
 * _puts - change pointer value
 *
 * @str : char parameter
 *
 * Return: Always 0 (Success)
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; *str++)
		_putchar(*str);

	_putchar('\n')
}

