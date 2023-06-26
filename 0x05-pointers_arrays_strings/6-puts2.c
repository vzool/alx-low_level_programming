#include "main.h"

/**
 * puts2 -  prints a string, followed by a new line, to stdout
 *
 * @str: char*
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0;; i++)
		if (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
		}
		else
			break;
	_putchar('\n');
}

