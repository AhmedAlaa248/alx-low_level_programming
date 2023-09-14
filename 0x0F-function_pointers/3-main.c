#include "3-calc.h"

/**
 * main - the main finction
 *
 * @argc : char parameter
 * @argv : argument vector
 *
 * Return: Always 0 (Success)
*/

int main(int __attribute__((__unused__)) argc, char *argv)
{
	int number1, number2;
	char *opF;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	opF = argv[2];

	if (get_op_func(opF) == NULL || opF[1] != '\0')
	{
		printf("Error\n")
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	
	printf("%d\n",get_op_func(opF)(a, b));
	return (0);
}

