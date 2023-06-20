#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: int
 *
 * Return: the last digit of the number n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	if (n < 0)
		n = -a;
	_putchar('0' + n);
	return (n);
}

