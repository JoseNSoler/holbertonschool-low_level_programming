#include "holberton.h"

/**
 * _pow_recursion - returns the power of x in base y
 *
 * @x: base number
 * @y: number to elevate
 * Return: number powered
 */

unsigned int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 1)
	{
		y = _pow_recursion(x, y - 1);
	}
	else
	{
		return (x * y);
	}
	return (x * y);
}



/**
 * binary_to_uint - Convert an array of char of "1 and 0" to
 * decimal notation
 *
 * @b: pointer to array to analize
 *
 * Return: final- number in base decimal
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int x = 0, y = 0, copiax = 0, final = 0;

	if (b && b[x])
	{
		while (b[x] != '\0')
		{
			if (b[x] > '1' || b[x] < '0')
			{
				return (0);
			}
			x++;
		}
		x--;
		copiax = x;
		for (; y <= copiax; y++)
		{
			if (b[y] == '1')
			{
				final += _pow_recursion(2, x);
			}
			x--;
		}
		return (final);
	}
	return (0);
}
