#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @str: char*
 *
 * Return: void
 */
void rev_string(char *str)
{
	int i = 0, size = 0;
	char tmp;

	for (;; size++)
		if (str[size] == '\0')
			break;

	for (; i < size; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
	}
}

