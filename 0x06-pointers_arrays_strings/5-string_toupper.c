#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: char*
 *
 * Return: char*
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += ('A' - 'a');
	return (s);
}

