#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character to fill with
 *
 * Return: pointer to the genererated array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	while (i < size)
		s[i++] = c;
	s[i] = '\0';
	return (s);
}
