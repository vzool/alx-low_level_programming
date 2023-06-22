#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal.
 *
 * @n: int
 *
 * Return: void.
 */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < n - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i != n)
			_putchar('\n');
	}
}
