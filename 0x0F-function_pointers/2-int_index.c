#include "function_pointers.h"

/**
 * int_index - change pointer value
 *
 * @array : int array parameter
 * @size : array size
 * @cmp : void function
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
