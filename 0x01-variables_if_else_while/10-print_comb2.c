#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point numbers
 * Return: 0
 *
 */

int main(void)
{

	int x  = 48;

	int y = 48;

	while (x <= 57)
	{
		for ( ; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (y == 57 && x == 57)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	y = 48;
	x++;
	}
	return (0);
}
