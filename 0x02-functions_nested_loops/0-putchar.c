#include <stdio.h>

void _putstring(char *s);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putstring("_putchar");
	return (0);
}

/**
 * _putstring - print a string
 * @s: string to print
 *
 * Return: void
 */
void _putstring(char *s)
{
	unsigned long i;

	for (i = 0; i < sizeof(s); i++)
		putchar(s[i]);
	putchar('\n');
}
