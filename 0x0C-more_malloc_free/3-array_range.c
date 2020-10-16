#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min integer
 * @max: max integer
 *
 * Return: Null if: min>max or malloc fails
 * -- arr: pointer to newly created array
 **/

int *array_range(int min, int max)
{
	int *arr;
	int x = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; min <= max; x++)
	{
		arr[x] = min;
		min++;
	}
	return (arr);
}
