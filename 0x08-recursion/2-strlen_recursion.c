#include "main.h"

/**
 * _strlen_recursion - change pointer value
 *
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

int _strlen_recursion(char *s);
{
	int ctr = 0;

	if (*s != '\0')
	{
		ntr += _strlen_recursion(s + 1) + 1;
	}
	return (ctr);

}

