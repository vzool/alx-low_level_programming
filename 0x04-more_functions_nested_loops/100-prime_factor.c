#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, limit = 612852475143, max;
	double target = sqrt(limit);

	for (i = 1; i <= target; i++)
		if (limit % i == 0)
			max = limit / i;
	printf("%ld\n", max);
	return (0);
}

