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
	const char letters[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
