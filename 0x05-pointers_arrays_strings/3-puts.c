#include "holberton.h"

/**
 * _puts - prints a string
 * @str: adress string to puts
 *
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		char y = str[x];

		putchar(y);
		x++;
	}
	putchar('\n');
}
