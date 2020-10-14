#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - generates a 2 dimensional array of integers
 * @width: width to use
 * @height: height to use
 * Return: Null if widht or height is 0 or negative --
 * mat:pointer to new 2 dimensional array
 *
 */

int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **mat;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mat = malloc(sizeof(int *) * height);

	if (mat == NULL)
	{
		return (NULL);
	}
	for (; x < height; x++)
	{
		mat[x] = malloc(sizeof(int) * width);
		if (mat[x] == NULL)
		{
			int z = 0;

			for (; z < x; z++)
			{
				free(mat[z]);
			}
			free(mat);
			return (NULL);
		}

	}

	for (; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			mat[x][y] = 0;
		}
	}
	return (mat);
}
