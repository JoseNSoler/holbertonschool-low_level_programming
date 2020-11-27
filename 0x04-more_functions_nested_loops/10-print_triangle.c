#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print a triangle of #
 *
 * @size: size height to use
 * Return: void 0
 */

void print_triangle(int size)
{
	int x = 0, y = 0;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - x)
					_putchar(' ');
				else
					_putchar('#');
				if (y == size)
					_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
