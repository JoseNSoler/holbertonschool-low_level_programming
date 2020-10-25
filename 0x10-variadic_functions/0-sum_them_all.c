#include "variadic_functions.h"

/**
 * sum_them_all - Summ all n  parameters
 * @n: number of parameters
 *
 * Return: sum of numbers
 */


int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;

	va_list arguments;

	if (arguments)
	{
		int count = 0;

		va_start(arguments, n);

		while (count < n)
		{
			sum += va_arg(arguments, int);
			count++;
		}

		va_end(arguments);

		return (sum);
	}
}
