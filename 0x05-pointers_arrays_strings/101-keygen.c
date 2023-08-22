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
	while (sum <= 2645)
	{
		z = rand() % 128;
		sum += z;
		putchar(z);
	}
	putchar(2772 - sum);
	return (0);
}
