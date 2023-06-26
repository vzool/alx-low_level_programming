#include "main.h"
#include <stdio.h>

/**
 * _strlen - the length of a string
 *
 * @s: char*
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0;; i++)
		if (s[i] == '\0')
			return (i);
}

