#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: int*
 * @n: n
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}

