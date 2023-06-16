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
	int i, j, k, l, max = 9;

	for (i = 0; i <= max; i++)
	{
		for (j = 0; j <= max; j++)
		{
			for (k = 0; k <= max; k++)
			{
				for (l = 0; l <= max; l++)
				{

					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
						return (0);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
