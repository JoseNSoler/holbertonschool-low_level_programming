#include "holberton.h"
#include <stdio.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments vector
 *
 * Description: returns multiplication of numbers
 * Return: 0 in succes -- 1 with less than 3 arguments
 */


int main(int argc, char *argv[])
{
	int num1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
}

