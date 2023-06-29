#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 *
 * @dest: char*
 * @src: char*
 * @n: int
 *
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
		;
	for (; src[j] != '\0' && j < n; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}

