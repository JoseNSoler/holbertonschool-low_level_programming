#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - all numbers to 98
 * @x: var int
 * Return : none
 */

void print_to_98(int x)
{

	while (x != 98)
	{
		printf("%d, ", x);

		if (x < 98)
		{
			x++;
		}
		else if (x > 98)
		{
			x--;
		}

	}
	printf("%d\n", 98);

}
