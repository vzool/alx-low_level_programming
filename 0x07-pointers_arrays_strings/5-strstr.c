#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: pointer to the string.
 * @needle: pointer to the substring.
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
			if (needle[j] != haystack[k] || haystack[k] == '\0')
				break;

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
