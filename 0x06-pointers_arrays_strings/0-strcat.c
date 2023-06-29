#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: char*
 * @src: char*
 *
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
		;
	for (; src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}

