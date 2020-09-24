#include "holberton.h"

/**
 * _isupper - checks uppercase in c
 * @c: int for character
 * Return: 1 upper, 0 false
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
