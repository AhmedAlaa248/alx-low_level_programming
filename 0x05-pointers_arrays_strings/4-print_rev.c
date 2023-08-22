#include "main.h"

/**
 *  print_rev- change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	while (count >= 0)
		_putchar(s[count]);
	_putchar('\n');
}
