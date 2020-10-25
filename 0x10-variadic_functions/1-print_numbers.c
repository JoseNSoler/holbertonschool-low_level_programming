#include "variadic_functions.h"

/**
 * print_numbers - print all n numbers
 * @separator: separator between pinted numbers
 * @n: number of parameters
 *
 * Return: void function - prints list of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list arguments;

	unsigned int count = 0;

	va_start(arguments, n);

	while (count < n)
	{
		int d = va_arg(arguments, int);

		printf("%d", d);
		if (count != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}

		count++;
	}
	_putchar('\n');
	va_end(arguments);
}
