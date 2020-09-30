#include "holberton.h"
#include "_putchar.c"

/**
 * puts2 - interval char of a string?
 * @str: string to analize
 *
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;
	int z = 0;


	while (str[x] != '\0')
	{
		x++;
	}

	for (; z <= x; z++)
	{
		if (z < x)
		{
			int bb = str[z];

			_putchar(bb);
			z++;
		}
	}
	_putchar('\n');

}
