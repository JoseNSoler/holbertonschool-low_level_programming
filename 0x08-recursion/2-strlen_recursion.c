#include "holberton.h"


/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to print to analize
 *
 * Return: int function - length of string
 *
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
