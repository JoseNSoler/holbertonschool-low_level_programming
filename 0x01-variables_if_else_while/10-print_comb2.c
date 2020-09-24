#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 *
 */

int main(void)
{

	int x  = 50;

	int y = 50;

	while (y <= 59)
	{
		for ( ; x <= 59; x++)
		{
			putchar(y);
			putchar(x);
			if (x == 59 && y == 59)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	x = 50;
	y++;
	}
	return (0);
}
