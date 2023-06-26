#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @str: char*
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;

	for (i = 0;; i++)
		if (str[i] == '\0')
			break;

	if (str[0] == '\0')
		i = 0;

	for (; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}

