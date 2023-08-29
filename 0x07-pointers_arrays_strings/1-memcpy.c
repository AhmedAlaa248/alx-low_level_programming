#include "main.h"

/**
 *  *_memcpy - change pointer value
 *
 * @src : char parameter
 * @dest : char parameter
 * @n : int parameter
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}

	return (dest);
}

