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
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}

