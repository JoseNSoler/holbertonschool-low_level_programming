#include "holberton.h"


/**
 * _strpbrk - gets length of a prefix substring
 * @s: string to compare
 * @accept: coincidences to find
 *
 * Return: number n bytes of coincidences or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}

		}
	}
	return ('\0');
}
