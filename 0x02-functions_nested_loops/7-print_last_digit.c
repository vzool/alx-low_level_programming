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
	_putchar('0' + n);
	return (n);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

