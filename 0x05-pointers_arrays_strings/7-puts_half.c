#include "main.h"

/**
 * puts_half- change pointer value
 *
 * @str : char parameter
 *
 * Return: Always 0 (Success)
*/

void puts_half(char *str)
{
	int le, i, n;

	for (le = 0; str[le] != '\0'; le++)
		;

	if (le % 2 == 0)
		n = le / 2;
	else
		n = (le - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

