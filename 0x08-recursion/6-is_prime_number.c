#include "holberton.h"

int _prime(int n, int d);

/**
 * is_prime_number -  returns if the input integer is a prime number
 * @n: int to analyze
 *
 * Return: function _prime
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime -  calcules if n is prime or not.
 * @n: number to analyze.
 * @d: divisor.
 *
 * Return: -1- if is a prime number, -0- else.
 */

int _prime(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % d == 0 && n != d)
	{
		return (0);
	}
	else if (n % d == 0 && n == d)
	{
		return (1);
	}
	else
		return (_prime(n, d + 1));
}
