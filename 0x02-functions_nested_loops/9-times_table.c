#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0,
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, x, c;
	char tmp[3], num[9];

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x == 0 && i != 0)
				sprintf(num, "%d", x);
			else
			{
				sprintf(tmp, "%d", x);
				sprintf(num, "%3s", tmp);
			}
			if (i == j && j == 0)
			{
				_putchar('0');
			}
			else
			{
				for (c = 0; c < 3; c++)
				{
					if (num[c] >= '0' && num[c] <= '9')
					{
						_putchar(num[c]);

						if (num[c] == '0')
							break;
					}
					else
					{
						_putchar(' ');
					}
				}
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

