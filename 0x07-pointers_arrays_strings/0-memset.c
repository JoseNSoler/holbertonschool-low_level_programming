#include "holberton.h"


/**
 * _memset - fills memory with a constant byte
 * @s: array to analize
 * @b: byte to print
 * @n: insigned int - number of bytes apply the function
 *
 * Return: s - pointer to the original array
 */



char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);

}
