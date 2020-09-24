#include "holberton.h"

/**
 * _isdigit - checks if c is a digit
 * @c: character
 * Return: 1 digit, 0 false
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
