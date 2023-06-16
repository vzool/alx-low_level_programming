#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char letters[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 26 - 1; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
