#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals matrix
 * @a: pointer - array to analize
 * @size: size to apply
 *
 * Return: void function - print function
 */



void print_diagsums(int *a, int size)
{
	int x;
	int sum = 0, sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x + (x * size)];
		sum1 = sum1 + a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
