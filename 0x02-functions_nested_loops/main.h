#ifndef HEADER_MAIN
#define HEADER_MAIN

#include <stdio.h>

/**
 * _putchar - print a string
 * @c: string to print
 *
 * Return: void
 */
void _putchar(char *c)
{
	unsigned long i;

	for (i = 0; i < sizeof(c); i++)
		putchar(c[i]);
	putchar('\n');
}

#endif
