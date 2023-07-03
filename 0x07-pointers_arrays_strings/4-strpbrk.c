#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes and return only the first match.
 *
 * @s: pointer to the string.
 * @accept: pointer to the string of bytes to be compared.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, found;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		found = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 1)
			break;
		i++;
	}
	if (found == 1)
		return (s + i);
	else
		return (NULL);
}
