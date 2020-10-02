#include "holberton.h"

/**
 * reverse_array - reverse the conten of an array
 * @a: array int to reverse
 * @n: elements on array
 *
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = x

	}
}
