#include "holberton.h"

/**
 * cap_string - capitalize word elemnts in a array
 * @a: array to analize
 *
 *
 * Return: char with capitalize
 */


char *cap_string(char *a)
{
	int x = 0, y = 0;
	int z;
	int form;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		    '{', '}'};

	while (arr[x] != '\0')
		x++;
	while (a[y] != '\0')
	{
		if (y == 0)
		{
			if (a[y] >= 97 && a[y] <= 122)
				a[y] = a[y] - 32;
		}
		else
		{
			for (z = 0; z < x; z++)
			{
				form = y + 1;
				if (a[y] == arr[z])
					if (a[form] >= 97 && a[form] <= 122)
						a[form] = a[form] - 32;
			}
		}
		y++;
	}
	return (a);
}
