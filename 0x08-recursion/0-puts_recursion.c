#include "main.h"

/**
 * _puts_recursion - change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recusion(s + 1);
	}
}

