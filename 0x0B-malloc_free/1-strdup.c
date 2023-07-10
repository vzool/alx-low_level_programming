#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy of the string given as a parameter.
 *
 * @str: array to duplicate
 *
 * Return: pointer to the genererated array
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *s;

	for (; str[size] != '\0'; size++)
		;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (s);
	}
	for (; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
