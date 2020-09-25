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

	while (y <= 59)
	{
		for ( ; x <= 59; x++)
		{
			putchar(y);
			putchar(x);
			if (x == 57 && y == 57)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	x = 48;
	y++;
	}
	return (0);
}
