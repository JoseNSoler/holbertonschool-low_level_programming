#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @x: number of arguments
 * @y: pointer to args
 *
 * Description: prints the minimum of coins to make change
 * Return: 0 if arguments are negatives -- 1 if arguments aren't exactly
 */

int main(int x, char **y)
{
	int sum, coins = 0;

	if (x != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(*(y + 1));

	while (sum >= 25)
		sum -= 25, coins++;
	while (sum >= 10)
		sum -= 10, coins++;
	while (sum >= 5)
		sum -= 5, coins++;
	while (sum >= 2)
		sum -= 2, coins++;
	while (sum >= 1)
		sum--, coins++;
	printf("%d\n", coins);
	return (0);
}
