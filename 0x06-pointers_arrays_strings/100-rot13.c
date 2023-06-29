#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: char*
 *
 * Return: char*
 */
char *rot13(char *s)
{
	int i = 0, offset;

	for (; s[i] != '\0'; i++)
	{
		offset = (s[i] & 32) + 65;
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = (s[i] - offset + 13) % 26 + offset;
	}
	return (s);
}

