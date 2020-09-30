#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a number of elements in arrays
 * @a: array to analize
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);

		if(x != n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
