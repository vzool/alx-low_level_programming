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
	int i;
	int size = sizeof(str);
	char tmp;

	for (i = 0;; i++)
		if (str[i] == '\0')
			break;

	for (; i >= 0; i--)
		if (str[i] != '\0')
		{
			tmp = str[size - i];
			str[size - i] = str[i];
			str[i] = tmp;
		}
}

