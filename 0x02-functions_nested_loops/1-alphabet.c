#include "holberton.h"

/**
 * print_alphabet - alphabet with header
 * Return: void
 *
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar(\n);
}
