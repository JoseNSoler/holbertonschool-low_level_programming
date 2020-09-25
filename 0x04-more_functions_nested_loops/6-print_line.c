#include "holberton.h"

/**
 * print_line - prints n times the char "_"
 *
 * @n: n times
 *
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = n;

		for (; x > 0 ; x--)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
