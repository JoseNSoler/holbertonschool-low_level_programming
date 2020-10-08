#include "holberton.h"


/**
 * _puts_recursion - prints a string followed by new line
 * @s: pointer to print
 *
 * Return: void function - final print
 *
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
		_puts_recursion(s + x);
	}
	else
	_putchar('\n');
}
