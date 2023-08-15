#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A C program that prints the last digit of a number
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int LD = n % 10;

	if (LD > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, LD);
	else if (LD < 6 && LD != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LD);
	else if (LD == 0)
		printf("Last digit of %i is %i and is 0\n");

	return (0);
}
