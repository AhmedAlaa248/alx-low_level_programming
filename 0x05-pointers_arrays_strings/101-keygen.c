#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random Passwords
 * Retrun: always 0
*/

int main (void)
{
	int sum;
	char z;

	srand(time(NULL));
	while (sum <= 2400)
	{
		z = rand() % 120;
		sum += z;
		putchar(z);
	}
	putchar(2281 - sum);
	return (0);
}
