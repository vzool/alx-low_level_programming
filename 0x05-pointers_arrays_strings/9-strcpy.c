#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: char*
 * @src: char*
 *
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, size = 0;

	for (;; size++)
		if (src[i] == '\0')
			break;

	for (; i < size; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}

