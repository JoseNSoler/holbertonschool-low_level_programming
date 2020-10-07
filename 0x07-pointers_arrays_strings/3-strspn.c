#include "holberton.h"


/**
 * _strspn - gets length of a prefix substring
 * @s: string to compare
 * @accept: coincidences to find
 *
 * Return: number n bytes of coincidences
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, eq;
	unsigned int cont = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			eq = 0;
			if (s[x] == accept[y])
			{
				eq = 1;
				cont++;
				break;
			}
		}
		if (eq == 1)
			continue;
		else
			break;
	}
	return (cont);
}
