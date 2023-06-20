#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, x = 0, y = 1, total = 0;
	unsigned long next = x + y, limit = 53;

	for (i = 3; i < limit; i++)
	{
		x = y;
		y = next;
		next = x + y;
		if (next >= 4000000)
			break;
		if (next % 2 == 0)
			total += next;
	}
	printf("%lu\n", total);
	return (0);
}

