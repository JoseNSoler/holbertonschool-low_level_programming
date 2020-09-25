#include "holberton.h"
#include <stdio.h>


/**
 * main - main entry
 *
 * Return: void
 */




int main(void)
{
	fizz_buzz();
	return (0);
}


/**
 * fizz_buzz - prints the "Fizz Buzz test" with mods
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if ((x % 3 != 0) && (x % 5 != 0))
		{
			printf("%d", x);
		}
		printf(" ");
	}
	printf("\n");
}
