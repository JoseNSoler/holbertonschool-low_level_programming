#include "holberton.h"

/**
 * rev_string - reverse a string to his variable original
 * @s: adress string to reverse and save it
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	int z;
	char a[10];


	while (s[x] != '\0')
	{
		x++;
	}

	for (z = x - 1; z >= 0; z--)
	{
		a[y] = s[z];
		y++;
	}

	a[y + 1] = '\0';

	for (z = 0; z <= i - 1; z++)
	{
		s[z] = a[z];
	}

}
