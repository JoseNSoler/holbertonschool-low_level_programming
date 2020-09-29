#include "holberton.h"

/**
 * _strlen - find length of char (excluding '\0')
 * @s: adress char to evaluate
 *
 * Return: x - length of char
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
