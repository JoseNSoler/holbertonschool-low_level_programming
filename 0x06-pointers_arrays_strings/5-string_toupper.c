#include "holberton.h"

/**
 * string_toupper - change all lowercase to upper in char
 * @a: an array of integers
 *
 *
 * Return: char uppercase
 */


char *string_toupper(char *a)
{
	int x = 0;
	int y, z;

	while (a[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		if (a[y] >= 'a' && a[y] <= 'z')
		{
			z = a[x];
			a[x] = z - 32;

		}
	}

	return (a);
}
