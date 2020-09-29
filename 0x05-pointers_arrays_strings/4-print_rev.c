#include "holberton.h"

/**
 * print_rev - prints a string in reverse esrever
 * @s: adress string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	x = x - 1;

	for (; x > 0; x--)
	{
		int y = s[x];

		_putchar(y);

	}

	_putchar('\n');
}
