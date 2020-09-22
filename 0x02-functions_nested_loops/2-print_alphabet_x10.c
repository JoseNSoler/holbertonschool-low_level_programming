#include "holberton.h"

/**
 * print_alphabet_x10 - print line x times
 *
 *
 */


void print_alphabet_x10(void)
{
	int y = 0;

	while (y < 10)
	{
		print_alphabet();
		y++;
	}

}

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
