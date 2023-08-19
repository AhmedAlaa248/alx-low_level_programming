#include "main.h"

/**
 *_isdigit - function that prints the alphabet in lowercase
 *
 * @c : checks input of function
 *
 * Return: returns 1 if 'c' is digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
