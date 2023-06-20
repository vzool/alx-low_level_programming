#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, x;

	for (i = 0; i < 1024; i++)
	{
		x = 0;
		for(j = 0; j <= i; j++)
		{
			if (j % 3 == 0 || j % 5 == 0 || j % 6 == 0)
			{
				x += j;
			}
		}
		printf("%d\n", x);
	}
	return (0);
}
