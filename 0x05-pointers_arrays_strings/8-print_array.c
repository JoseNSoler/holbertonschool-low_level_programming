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
	int y = 0;
	int b = 0;

	for (; x > y; x--)
	{
		while (b < n)
		{

			int z = a[b];

			printf("%d", z);
			if (b != n - 1)
			{
				printf(", ");
			}
			b++;
		}
	}
}
