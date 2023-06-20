#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, x = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || i % 6 == 0)
			x += i;
	}
	printf("%d\n", x);
	return (0);
}
