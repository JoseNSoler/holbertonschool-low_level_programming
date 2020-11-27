#include <stdio.h>

/**
 * print_triangle - print a triangle of #
 *
 * @size: size height to use
 * Return: void 0
 */

void print_triangle(int size)
{
	int x = 1, y = 1;

	if (size > 0)
	{
		for (; x <= size; x++)
		{
			for (; y <= size; y++)
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
