#include "holberton.h"
#include <stdio.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments vector
 *
 * Description: returns arguments passed
 * Return: 0 in succes
 */


int main(int argc, char *argv[])
{

	int x = 0;

	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
