#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to the string.
 * @c: character to locate.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
		if (s[i] == c)
			return (s);

	return (NULL);
}
