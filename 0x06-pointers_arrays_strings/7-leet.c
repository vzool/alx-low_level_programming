#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: char*
 *
 * Return: char*
 */
char *leet(char *s)
{
	int i = 0, j;
	char *s1 = "aeotl";
	char *s2 = "AEOTL";
	char *s3 = "43071";

	for (; s[i] != '\0'; i++)
		for (j = 0; s1[j] != '\0'; j++)
			if (s[i] == s1[j] || s[i] == s2[j])
				s[i] = s3[j];
	return (s);
}

