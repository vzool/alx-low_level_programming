#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1 = 0, size2 = 0, size;
	char *s, *empty = "";

	if (s1 == NULL && s2 == NULL)
		return (empty);
	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;

	size = size1 + size2;
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
			s[i++] = s2[j];
	s[i] = '\0';
	return (s);
}
