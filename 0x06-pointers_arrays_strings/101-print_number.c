#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: number to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = n *= -1;
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar('0' + n % 10);
}
