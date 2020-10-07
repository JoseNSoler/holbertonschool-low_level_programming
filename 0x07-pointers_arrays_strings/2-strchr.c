#include "holberton.h"


/**
 * _strchr - locates a characters in a char
 * @s: char destiny of the functio
 * @c: character to find
 *
 * Return: array of concidences
 */



char *_strchr(char *s, char c)
{
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (s[y] == c)
		{
			return (s + y);
		}
	}
	return ('\0');
}
