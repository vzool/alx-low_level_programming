#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * @n: number to be checked
 * Description: checks if number is positive or negative
 * 
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
