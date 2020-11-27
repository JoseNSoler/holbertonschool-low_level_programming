#include "holberton.h"
#include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: void 0
 */

int main(void)
{
	int x = 0, summ = 0;

	for (; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			summ += x;
	}

	printf("%d\n", summ);

	return (0);
}
