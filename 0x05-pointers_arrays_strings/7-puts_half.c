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

	int y = 0;

	if (x % 2 != 0)
	{
		y = (x - 1) / 2;
		for (; y <= x - 1; y++)
		{
			putchar(str[y]);
		}
	}

	else
	{
		y = x / 2;

		for (; y <= x - 1; y++)
		{
			putchar(str[y]);
		}

	}
}
