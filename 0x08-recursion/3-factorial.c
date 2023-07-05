#include "main.h"
#include <unistd.h>

/**
 * factorial - factorial of a given number.
 *
 * @n: number to factorial
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
