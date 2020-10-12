#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments vector
 *
 * Description: adds positive numbers
 * Return: 0 if no arguments -- 1 if argument is a character
 */

int main(int argc, char *argv[])
{
	int x, y, z, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			y = atoi(argv[x]);
			for (z = 0; argv[x][z]; z++)
			{
				if (argv[x][z] < '0' || argv[x][z] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += y;
		}
		printf("%d\n", sum);
	}
	return (0);
}
