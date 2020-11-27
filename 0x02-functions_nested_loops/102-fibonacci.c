#include <stdio.h>

/**
 * main - write a program that finds and prints the
 * sum of the even-valued terms
 *
 * Return: void 0
 */


int main(void)
{
	int x = 0;
	unsigned long fib1 = 0, fib2 = 1, summ = 0;

	for (; x < 50; x++)
	{
		summ = fib1 + fib2;
		printf("%lu", summ);

		fib1 = fib2;
		fib2 = summ;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
