#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: char*
 *
 * Return: char*
 */
char *cap_string(char *s)
{
	int i = 0, j, hit;
	char *match = " ,.\n;!(){}!?\"\t";

	for (; s[i] != '\0'; i++)
	{
		hit = 0;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				hit = 1;
			else
				for (j = 0; match[j] != '\0'; j++)
					if (s[i - 1] == match[j])
					{
						hit = 1;
						break;
					}

			if (hit == 1)
				s[i] += ('A' - 'a');
		}
	}
	return (s);
}

