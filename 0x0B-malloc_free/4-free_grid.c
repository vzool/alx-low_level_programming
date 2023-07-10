#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: array to free
 * @height: height of the array
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height < 1)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
