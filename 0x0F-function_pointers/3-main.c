#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 98 if number of arguments is wrong,
 * 99 if the operator is incorrect,
 * 100 if the user tries to divide (/ or %) by 0.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
