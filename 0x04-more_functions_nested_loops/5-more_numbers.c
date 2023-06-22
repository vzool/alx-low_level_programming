#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int t, i, j;
	char num[3];

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			sprintf(num, "%d", i);
			for (j = 0; j < 3; j++)
				_putchar(num[j]);
		}
		_putchar('\n');
	}
}
