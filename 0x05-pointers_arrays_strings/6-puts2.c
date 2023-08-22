#include "main.h"

/**
 * puts2 - change pointer value
 *
 * @str : char parameter
 *
 * Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str = str + 2)
		_putchar(str[i]);
	_putchar('\n');
}

