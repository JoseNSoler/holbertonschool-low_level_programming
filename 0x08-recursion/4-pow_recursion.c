#include "holberton.h"


/**
 * _pow_recursion - function to raise x to the power of y
 * @x: pointer int of base
 * @y: pointer int of exponent
 * Return: int function - int raised
 *
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (z = x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
