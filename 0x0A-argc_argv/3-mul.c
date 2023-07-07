#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (i > 1)
		{
			mul *= atoi(argv[i]);
		}
		else
		{
			mul = atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
