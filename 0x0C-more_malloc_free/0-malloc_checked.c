#include"main.h"

/**
 * *malloc_checked-  a function that allocates memory using malloc
 * @b: arguments
* Return: pointer to array initialized or NULL
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == 0)
		exit(98);
	return (x);
}
