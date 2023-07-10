#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string to be splitted
 *
 * Return: array of words.
 */
char **strtow(char *str)
{
	int i, j, c = 0, size = 0;
	char **s;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (; av[i][size] != '\0'; size++)
			;
	s = malloc(sizeof(char) * (size + ac - 2));
	if (s == NULL)
		return (s);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[c++] = av[i][j];
		s[c++] = '\n';
		s[c] = '\0';
	}
	return (s);
}
