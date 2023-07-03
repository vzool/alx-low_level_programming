#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to the string.
 * @accept: pointer to the string of bytes to be compared.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (s);
		}
	}

	return (NULL);
}
