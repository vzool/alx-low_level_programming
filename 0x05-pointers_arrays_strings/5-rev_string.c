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
	int i, tmp;
	int size = sizeof(str);

	for (i = 0; i < size / 2; i++)
	{
		tmp = str[i];
		str[i] = str[size - i];
		str[size - i] = tmp;
	}
}

