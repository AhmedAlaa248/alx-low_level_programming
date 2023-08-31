#include "main.h"

/**
 * _pow_recursion - change pointer value
 *
 * @x : int parameter
 * @y : int parameter
 *
 * Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));

}
