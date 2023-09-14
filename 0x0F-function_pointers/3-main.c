#include "3-calc.h"

/**
 * main - the main finction
 *
 * @argc : char parameter
 * @argv : argument vector
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int (*opF)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opF = get_op_func(argv[2]);

	if (!opF)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", opF(a, b));
	return (0);
}

