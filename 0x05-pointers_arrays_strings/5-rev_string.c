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
	char tmp;
	int i, size = 0;

	while (str[size] != '\0')
		size++;

	size--;

	for (i = 0; i < size / 2; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size- i] = tmp;
	}
}

