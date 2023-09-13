#include "function_pointers.h"

/**
 * array_iterator - change pointer value
 *
 * @array : int parameter
 * @size : array size
 * @action : void pointer
 *
 * Return: Always 0 (Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
