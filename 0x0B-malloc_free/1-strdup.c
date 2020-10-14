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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y] != '\0')
	{
		y++;
	}
	src = malloc((sizeof(char) * y) + 1);

	if (src == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; str[x]; x++)
		{
			src[x] = str[x];
		}
		src[x] = '\0';
	}
	return (src);
	free(src);
}
