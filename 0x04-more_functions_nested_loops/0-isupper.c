#include "holberton.h"

/**
 * _isupper - checks uppercase in c
 * @c: int for letter
 * Return: 1 upper, 0 false
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
