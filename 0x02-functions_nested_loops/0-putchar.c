#include <stdio.h>

/**
 * _putchar - print a character
 * @c: character to print
 *
 * Return: int
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
