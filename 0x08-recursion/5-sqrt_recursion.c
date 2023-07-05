#include "main.h"
#include <unistd.h>

/**
 * _sqrt - find square root
 *
 * @n: base value
 * @i: incrementer
 *
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - square root of a number
 *
 * @n: base value
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt(n, i));
}
