#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destiny to concatenate second string
 * @src: source of the frist string
 * @n: bytes to concatenate
 * Return: char- string concatenated
 */


char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		y++;
	}

	for (; z < n; z++)
	{
		if (z < y)
		{
			dest[x] = src[z];
			x++;
		}
	}

	dest[x] = '\0';
	return (dest);

}
