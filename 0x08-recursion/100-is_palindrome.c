#include "main.h"
#include <unistd.h>

/**
 * check_palindrome - check if string is palindrome by recursive.
 *
 * @s: string to check
 * @len: length of string
 *
 * Return: int
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	else
		return (0);
}

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string to check
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (_strlen_recursion(s + 1)));
}

/**
 * is_palindrome - check if string is palindrome by recursive.
 *
 * @s: string to check
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, len));
}
