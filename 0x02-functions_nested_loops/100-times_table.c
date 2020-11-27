#include "holberton.h"

/**
 * print_times_table - printsn n the times table
 *
 * @n: value to print n table
 */


void print_times_table(int n)
{
	int x, mult, product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
   			{
    				_putchar(',');
    				_putchar(' ');

				product = x * mult;

    				if (product <= 99)
					_putchar(' ');

				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
     					_putchar((product / 10) + '0');
				}
			_putchar((product % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
