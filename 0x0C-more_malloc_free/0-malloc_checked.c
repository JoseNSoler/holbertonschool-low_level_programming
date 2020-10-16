#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: memory to use
 *
 * Return: 98 if fails - pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
