#include <stdio.h>

/**
 * main - write a program that finds and prints the
 * sum of the even-valued terms (whose values do not exceed
 * 4,000,000)
 *
 * Return: void 0
 */



int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsumm = 0;
	float tot_summ;

	while (1)
	{
		fibsumm = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsumm % 2) == 0)
			tot_summ += fibsumm;

		fib1 = fib2;
		fib2 = fibsumm;
	}
	printf("%.0f\n", tot_summ);

	return (0);
}
