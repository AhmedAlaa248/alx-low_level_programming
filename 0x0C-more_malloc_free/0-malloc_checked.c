#include "main.h"

/**
 * malloc_checked - change pointer value
 *
 * @b : int parameter
 *
 * Return: Always 0 (Success)
*/

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == 0)
		exit(98);

	return (z);
}
