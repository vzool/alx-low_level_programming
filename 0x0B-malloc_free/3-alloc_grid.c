#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create 2 dimensional array of integers.
 *
 * @width: width of the array 
 * @height: height of the array
 *
 * Return: pointer to the array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (width < 1 || height < 1)
		return (NULL);
	x = malloc(sizeof(int*) * height);
	if (x == NULL)
		return (x);
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int*) * width);
		if (x[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
                        x[i][j] = 0;
	}
	return (x);
}
