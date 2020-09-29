#include "holberton.h"

/**
 * swap_int - swap values of int a - b
 * @a: int value
 * @b: int value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
