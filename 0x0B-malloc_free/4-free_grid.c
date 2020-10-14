#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2 dimensional array
 * @grid: pointer grid to analize
 * @height: height to use
 * Return: void                                     --
 *
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
