#include "main.h"

/**
 * is_prime_number - change pointer value
 *
 * @n : int parameter
 * @x : int parameter
 *
 * Return: Always 0 (Success)
*/

int check_prime(int n, int x);

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - change pointer value
 *
 * @n : char parameter
 * @x : int parameter
 *
 * Return: Always 0 (Success)
*/

int check_prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, x + 1));
}

