#include "holberton.h"

/**
 * leet - encode in base 1337
 * @a: array to analize
 *
 *
 * Return: char encoded
 */


char *leet(char *a)
{
	int x = 0;
	int y;
	char aeo[] = {"aeotlAEOTL"};
	char b[] = {"4307143071"};


	while (a[x] != '\0')
	{
		for (y = 0; aeo[y] != '\0'; y++)
		{
			if (a[x] == aeo[y])
			{
				a[y] = b[x];
				break;
			}
		}

		x++;
	}
	return (a);
}
