#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: pointer to an 8 element array of integers
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar('\n');
		i++;
	}
}
