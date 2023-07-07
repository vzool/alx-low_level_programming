#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, tmp;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		if (tmp == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += tmp;
	}
	printf("%d\n", sum);
	return (0);
}
