#include "holberton.h"


/**
 * *create_array - generates array and returns pointer of it
 * @size: unsigned - size array
 * @c: char to replicate in array
 *
 * Return: Null if size is invalid - str:pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(str) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int x = 0;

		for (; x < size; x++)
		{
			str[x] = c;
		}
		return (str);
	}
	return (NULL);
}
