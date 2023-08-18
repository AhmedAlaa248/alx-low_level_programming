#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/


int positive_or_negative(int) {
	if( n > 0)
		printf("%i is possitive\n", n);
	else if( n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}

int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}
