#include "main.h"

/**
 * _sqrt_recursion - change pointer value
 *
 * @n : int parameter
 * @value : int parameter
 *
 * Return: Always 0 (Success)
*/

int check_sqr(int n, int value);

int _sqrt_recursion(int n)
{
	return (check_sqr(n, 1));
}

/**
 * check_sqr - change pointer value
 *
 * @n : int parameter
 * @value : int parameter
 *
 * Return: Always 0 (Success)
*/

int check_sqr(int n, int value)
{
	if (value * value == n)
		return (val);
	else if (value * value < n)
		return (check_sqr(n, value + 1));
}

