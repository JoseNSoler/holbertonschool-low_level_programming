#include "holberton.h"


/**
 * _memcpy - copy n bytes from a memory area
 * @dest: char destiny of the function
 * @src: source char for the function
 * @n: insigned int - number of bytes apply the function
 *
 * Return: dest - pointer to the original array
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
