#include "holberton.h"

/**
 * print_square - prints square times the char "#" with
 * a "size" times
 * @size: size times
 *
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = size;
		int y = size;

		for (; x > 0; x--)
		{
			while (size > 0)
			{
				_putchar(35);
				size--;
			}
			_putchar('\n');
			size = y;
		}

	}
}
