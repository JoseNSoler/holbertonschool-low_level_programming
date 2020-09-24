#include "holberton.h"

/**
 * print_numbers - prints numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + 48);
	}

	_putchar('\n');
}
