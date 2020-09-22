#include "holberton.h"

/**
 * print_alphabet - alphabet with heade
 * Return for alphabet
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 0;

	while (y < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
			if (x == 'z')
			{
			x = 'a';
			break;
			}

		}
	_putchar('\n');
	y++;
	}
}
