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
 * _putchar - print a string
 * @c: string to print
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

