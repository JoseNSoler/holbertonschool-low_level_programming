#include "holberton.h"

/**
 * print_binary - prints a decimak number in binary format
 * @n: Decimal to analize
 *
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('0');
		return;
	}
}
