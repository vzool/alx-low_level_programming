#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 *
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: number of bytes to copy.
 *
 * Return: pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
