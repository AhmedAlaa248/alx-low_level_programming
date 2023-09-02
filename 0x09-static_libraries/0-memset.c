#include "main.h"

/**
 * *_memset - fills memory with constant value
 *
 * @s : parameter to put a constant
 * @b : char parameter
 * @n : int parameter
 *
 * Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}

