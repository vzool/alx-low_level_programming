#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 *
 * @dest: char*
 * @src: char*
 * @n: int
 *
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; src[i] != '\0'; i++)
		;

	for (; dest[j] != '\0' && j < n; j++)
		if (j > i)
			dest[j] = 0x0;
		else
			dest[j] = src[j];
	return (dest);
}

