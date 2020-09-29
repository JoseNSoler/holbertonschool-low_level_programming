#include "holberton.h"

/**
 * _strlen - find length of char (excluding '\0')
 * @s: char to evaluate
 *
 * Return: x - length of char
 */

int _strlen(char *s)
{
	int x;

	while (s[x] != '\n')
	{
		x++
	}
	return (x);
}
