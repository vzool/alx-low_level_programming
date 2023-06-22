#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 *
 * @c: int
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
