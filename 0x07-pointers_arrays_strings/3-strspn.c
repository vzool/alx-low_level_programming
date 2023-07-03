#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to the string.
 * @accept: pointer to the string of bytes to be compared.
 *
 * Return: number of bytes in the initial segment of s which consist only of
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (n);

		n++;
	}

	return (n);
}
