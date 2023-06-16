#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, max = 9;

	for (i = 0; i <= max; i++)
	{
		for (j = i + 1; j <= max; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
