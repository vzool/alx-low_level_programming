#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * created by your alloc_grid function.
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: .
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0, size = 0;
	char *s;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (; av[i][size] != '\0'; size++)
			;
	s = malloc(sizeof(char) * (size + ac));
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
