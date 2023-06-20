#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: int
 *
 * Return: void
 */
void print_to_98(int n)
{
	int x = 98, i = 0, j;
	char num[3];
	int bigger = 0;

	if (n == 0)
		n = x;
	else if (n == x)
		i = x;
	else if(n > x)
	{
		bigger = 1;
		i = n;

	}

	if (bigger == 1)
	{
		for (; i >= x; i--)
        	{
                	sprintf(num, "%d", i);
                	for(j = 0; j < 3; j++)
                        _putchar(num[j]);
                	if (i != x)
              		{
                        	_putchar(',');
                        	_putchar(' ');
                	}
        	}
	}
	else
	{
		for (; i <= n; i++)
        	{
                	sprintf(num, "%d", i);
                	for(j = 0; j < 3; j++)
                        	_putchar(num[j]);
                	if (i != x)
                	{
                        	_putchar(',');
                        	_putchar(' ');
                	}
        	}
	}
	_putchar('\n');
}

