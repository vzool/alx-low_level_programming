#include "main.h"

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

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (j == 0)
				_putchar('0' + x);
			else if (x < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x < 100 && x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
			}
			else if (x >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (x / 100));
				_putchar('0' + ((x / 10) % 10));
				_putchar('0' + (x % 10));
			}
		}
		_putchar('\n');
	}
}

