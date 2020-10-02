#include "holberton.h"

/**
 * _strncpy - copy a strings
 * @dest: destiny to put copy
 * @src: source of copy
 * @n: bytes to copy
 * Return: char- dest copied
 */


char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < n; y++)
	{
		if (y < x)
		{
			dest[y] = src[y];
		}
		else
		{
			dest[y] = '\0';
		}
	}
	return (dest);

}
