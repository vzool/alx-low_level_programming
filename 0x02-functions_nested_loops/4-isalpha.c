#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * @c: int
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

