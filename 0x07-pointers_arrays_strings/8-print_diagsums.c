#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *
 * @a: pointer to an 8 element array of integers
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum1 += *((a + i * size) + j);
			if (i + j == size - 1)
				sum2 += *((a + i * size) + j);
			j++;
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
