#include "main.h"

/**
 * add - adds two integers and returns the result
 *
 * @a: int
 * @b: int
 *
 * Return: the result of addition value.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

