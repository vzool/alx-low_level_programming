#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number
 *
 * @i: int
 *
 * Return: void
 */
void print_number(int i)
{
	char num[3];
	int j;

	sprintf(num, "%d", i);
	for (j = 0; j < 3; j++)
		_putchar(num[j]);
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: int
 *
 * Return: void
 */
void print_to_98(int n)
{
	int x = 98, i = 0;
	int reverse = 0;

	if (n == 0)
		n = x;
	else if (n == x)
		i = x;
	else if (n > x)
	{
		reverse = 1;
		i = n;
	}
	else if (n < x)
	{
		i = n;
		n = x;
	}

	if (reverse == 1)
		for (; i >= x; i--)
		{
			print_number(i);
			if (i != x)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (; i <= n; i++)
		{
			print_number(i);
			if (i != x)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
