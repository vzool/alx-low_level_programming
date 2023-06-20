#include <stdio.h>
#include "main.h"

/**
 * print_number - prints number
 *
 * @num: char *
 *
 * Return: void
 */
void print_number(char *num, int size)
{
	int c;

	for (c = 0; c < size; c++)
	{
		if (num[c] >= '0' && num[c] <= '9')
			_putchar(num[c]);
		else
			_putchar(' ');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: int
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, x;
	char tmp[4], num[9];

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x == 0 && i != 0)
				sprintf(num, "%d", x);
			else
			{
				sprintf(tmp, "%d", x);
				sprintf(num, "%4s", tmp);
			}
			if (i == j && j == 0)
				_putchar('0');
			else
				print_number(num, 4);
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

