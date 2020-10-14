#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates a program with a new line
 * @ac: argument counter
 * @av: pointer to argument vector
 * Return: NULL if ac or av are invalid - arr: pointer
 * to new array
 *
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int x = 0, y, len = 0, p = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (av[x])
	{
		y = 0;
		while (av[x][y])
		{
			len++;
			y++;
		}
		x++;
	}

	arr = malloc(len + ac + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			arr[p] = av[x][y];
			p++;
		}
		arr[p] = '\n';
		p++;
	}
	arr[p] = '\0';
	return (arr);
}
