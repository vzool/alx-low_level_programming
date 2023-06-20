#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 51; i++)
	{
		printf("%d\n", i * (i-1));
	}
	return (0);
}
