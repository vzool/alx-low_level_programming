#include <stdio.h>

/**
 * check_digit - checks if a string is a digit
 * @s: string to check
 * Return: 1 if true, 0 if false
 */
int check_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign = 1, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
	}
	return (num * sign);
}

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
		if (!check_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		tmp = _atoi(argv[i]);
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
