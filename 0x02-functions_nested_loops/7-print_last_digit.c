#include "holberton.h"

/**
 * print_last_digit - prints last digit of a int
 *@r: integer
 * Return: last number
 */

int print_last_digit(int r)
{

	int x = r % 10;

	if (x > 0)
	{
		_putchar(x + '0');
	}
	else
	{
		a = a * -1;
		_putchar(x + '0');
	}
	return (x);
}
