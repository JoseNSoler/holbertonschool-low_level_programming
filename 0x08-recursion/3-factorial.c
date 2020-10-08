#include "holberton.h"


/**
 * factorial - function to factorial a n number
 * @n: pointer of int to analize
 *
 * Return: int function - factorial of n
 *
 */

int factorial(int n)
{
	int x;

	if (n == 1)
	{
		return (1);
	}
	else if (n >= 0)
	{
		return (x = n * factorial(n - 1));
	}
	else
		return (-1);
}

