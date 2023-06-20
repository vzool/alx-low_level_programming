#include "main.h"

#define atoa(x) #x

/**
 * jack_bauer - prints every iminute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, c;
	char num[2];

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
                                _putchar('0');
				_putchar('0' + i);
			}
			else
			{
				sprintf(num, "%d", i);
				for (c = 0; c < 2; c++)
					_putchar(num[c]);
			}
			_putchar(':');
			if (j < 10)
			{
                                _putchar('0');
				_putchar('0' + j);
			}
			else
                        {
                                sprintf(num, "%d", j);
                                for (c = 0; c < 2; c++)
                                        _putchar(num[c]);
                        }
			_putchar('\n');
		}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}
