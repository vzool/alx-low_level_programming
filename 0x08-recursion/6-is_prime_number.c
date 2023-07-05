#include "main.h"
#include <unistd.h>

/**
 * _prime - check if number a prime number
 *
 * @n: base value
 * @i: iterator
 *
 * Return: int
 */
int _prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - check if number a prime number
 *
 * @n: base value
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
