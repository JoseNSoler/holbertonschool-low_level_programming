#include "holberton.h"

/**
 * print_most_numbers - prints numbers except
 * 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + 48);
			x++;
		}
		else
		{
			x++;
		}

	}

	_putchar('\n');
}
