#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 *
 * @s1: char*
 * @s2: char*
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (0);
}

