#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - the main finction
 *
 * @argc : char parameter
 * @argv : argument vector
 *
 * Return: Always 0 (Success)
*/

int main(int int argc, char *argv[])
{
	int number1, number2;
	int (*opF)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n")
		exit(99);
	}
	opF = get_op_func(argv[2]);

	if (opF == NULL)
	{
		printf("Error\n")
		exit(99);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	printf("%d\n", opF)(number1, number2));
	return (0);
}

