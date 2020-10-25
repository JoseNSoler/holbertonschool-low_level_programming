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

	unsigned int count = 0;

	if (separator == NULL)
		separator = "";

	va_start(arguments, n);

	while (count < n)
	{
		const char *str;

		str = va_arg(arguments, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (count != n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
			count++;
		}
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(arguments);

}
