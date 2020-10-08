#include "holberton.h"


/**
 * _print_rev_recursion - prints a string in reverse with recursion
 * @s: pointer to print to analize
 *
 * Return: void function - final print
 *
 */

void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x])
	{
		_print_rev_recursion(s + (x + 1));
		_putchar(s[x]);
	}
}
