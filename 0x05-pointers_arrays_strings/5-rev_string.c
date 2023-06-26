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

	while (str[size] != '\0')
		size++;

	for (; i < size / 2; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
	}
}

