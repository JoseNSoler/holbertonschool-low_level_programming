#include "holberton.h"


/**
 * _strcpy - copies the string pointed to by src
 * @dest: destiny to the copy of the array
 * @src: source of the array
 * Return: dest array
 */

void *_strcpy(char *dest, char *src)
{
	int x = 0;
	int z;

	while (src[x] != '\0')
	{
		x++;
	}

	for (z = 0; z < x; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';
	return (dest);

}
