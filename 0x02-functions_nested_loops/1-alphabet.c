#include "holberton.h"

/**
 * print_alphabet - alphabet with heade
 * Return for alphabet
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}
