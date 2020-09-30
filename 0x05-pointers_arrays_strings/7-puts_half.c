#include "holberton.h"

/**
 * puts_half - prints after the middle of a string
 * @str: string to analize
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}


	if (x % 2 != 0)
	{
		int y = 0;

		y = (x - 1) / 2;
		for (; y <= x - 1; y++)
		{
			_putchar(str[y]);
		}
	}

	else
	{
		int z = 0;

		z = x / 2;

		for (; z <= x - 1; z++)
		{
			_putchar(str[z]);
		}

	}
}
