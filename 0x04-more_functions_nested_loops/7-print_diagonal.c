#include "holberton.h"

/**
 * print_diagonal - prints n times the char "\" with
 * whitespaces
 * @n: n times
 *
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = n;
		int x = 0;


		for (; a > 0 ; a--)
		{
			for (; x < n ; x++)
			{
				int y = x;

				if (y == 0)
				{
					_putchar(92);
					_putchar('\n');
				}
				else
				{
					while (y > 0)
					{
						_putchar(32);
						y--;
					}
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
}
