#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 *
 * @n: int
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
		for (j = 0; j < i; j++)
			if (j == i - 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
}
