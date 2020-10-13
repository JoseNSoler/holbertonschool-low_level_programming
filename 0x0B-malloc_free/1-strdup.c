#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - duplicates a string 
 * @str: string to duplicate
 *
 * Return: Null on invalid str - src:pointer to array duplicated
 *
 */

char *_strdup(char *str)
{
	char *src;
	int x = 0, y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	src = malloc(y);

	if (src == NULL)
	{
		return(NULL);
	}
	else
	{
		for (; x < y; x++)
		{
			src[x] = str[x];
		}
	}
	return (src);
	free(src);
}
