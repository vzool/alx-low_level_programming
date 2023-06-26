#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 *
 * @s: char*
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, size = 0, x = 0, negative = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
                {
			if (i > 0)
				if (s[i - 1] == '-')
					negative = 1;
                }
		i++;
	}

	size = i;
	printf("%s - %d - negative %d\n", s, size, negative);

	for (i = 0; i <= size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			printf("%c\n", s[i]);
		}
		i++;
	}

	if (negative == 1)
		x *= -1;

	printf("======================================================================\n");
	return (x);
}

