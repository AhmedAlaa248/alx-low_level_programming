#include "main.h"

/**
 *_sqrt - finds the square root
 *
 * @z: input
 * Return: square of z
 */

double _sqrt(double z)
{
	float sqrt, tmp;

	sqrt = z / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (z / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds the largest prime
 *
 * @number: number to find
*/

void largest_prime_factor(int number)
{
	int i, largest;

	while (number % 2 == 0)
		number = number 2;

	for (i = 3; i < _sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			number = number / i;
			largest = i;
		}
	}

	if (num > 2)
		largest = number;
	printf("%d\n", largest)
}

/**
 * main = Entery point
 *
 * Return: Always 0
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}

