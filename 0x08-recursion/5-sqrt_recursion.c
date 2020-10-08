#include "holberton.h"


/**
 *squarenix - check if can apply square root
 *@x: number to check
 *@y: second number
 *Return: int function - int with square
 */
int squarenix(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y * y > x)
	{
		return (-1);
	}
	return (squarenix(x, y + 1));
}



/**
 * _sqrt_recursion - function to apply natural square to int
 * @n: pointer int to analize
 *
 * Return: int function - return of function squarenix
 *
 */


int _sqrt_recursion(int n)
{
	return (squarenix(n, 1));
}
