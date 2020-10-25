#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator to use between prints
 * @n: number of parameters
 *
 * Return: void - print strings
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arguments;
	char *str;

	unsigned int count = 0;

	if (separator == NULL)
		separator = "";

	va_start(arguments, n);

	for ( ; count < n; count++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (count != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);

}
