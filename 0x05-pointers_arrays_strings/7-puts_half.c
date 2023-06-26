#include "main.h"

/**
 * puts_half -  prints second half of a string, followed by a new line
 *
 * @str: char*
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j;

	for (;; i++)
		if (str[i] == '\0')
			break;
	for (j = i / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}

