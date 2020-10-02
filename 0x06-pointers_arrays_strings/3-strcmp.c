#include "holberton.h"

/**
 * _strcmp - compares two trings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparation of strings
 */


int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y, z;

	while (s1[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		if (s1[y] == '\0' && s2[y] == '\0')
		{
			return (0);
		}
		if (s1[y] != s2[y] || s2[y] == '\0')
		{
			break;
		}
	}
	z = s1[y] - s2[y]
	return (z);


}
