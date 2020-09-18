#include <stdio.h>
#include <stdlib.h>
/**
 * main -  Alphabet without q and eEntry point
 *
 * Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		if (c == 'e' || c == 'q')
		{
			c++;
		}

		putchar(c);
		c++;

		if (c > 'z')
		{
			putchar('\n');
		}
	}

	return (0);
}
