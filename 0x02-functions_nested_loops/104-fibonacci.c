#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, x = 0, y = 1;
	unsigned long next = x + y, limit = 53;

	for (i = 3; i < limit; i++)
	{
		printf("%lu", next);
		if (i < limit - 1)
			printf(", ");
		else
			printf("\n");
		x = y;
		y = next;
		next = x + y;
	}
	return (0);
}

