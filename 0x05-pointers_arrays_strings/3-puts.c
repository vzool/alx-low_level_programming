#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 *
 * @str: char*
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
		if (str[i] != '\0')
			_putchar(str[i]);
		else
			break;
	_putchar('\n');
}

