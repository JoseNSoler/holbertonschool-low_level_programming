#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list alist;
	int x = 0, y = 0;
	char *str = "";

	type_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};


	va_start(alist, format);
	while (format && format[x])
	{
		while (types[y].type_format)
		{
			if (format[x] == *types[y].type_format)
			{
				printf("%s", str);
				types[y].f(alist);
				str = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(alist);
}

/**
 * print_char - prints a character
 * @s: list to analize
 */

void print_char(va_list s)
{
	printf("%c", va_arg(s, int));
}

/**
 * print_int - prints a integer.
 * @s: list to analize
 */

void print_int(va_list s)
{
	printf("%i", va_arg(s, int));
}

/**
 * print_float - prints character.
 * @s: list to analize
 */

void print_float(va_list s)
{
	printf("%f", va_arg(s, double));
}

/**
 * print_string - prints an array of character.
 * @s: list to analize
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
