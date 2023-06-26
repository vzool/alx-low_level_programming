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
	int i = 0, size = sizeof(str);
	char tmp;

	for (; i < size / 2; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
	}
}

