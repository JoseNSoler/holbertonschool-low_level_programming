#include "holberton.h"

/**
 * _islower - input define lowercase
 * @c: character
 * Return: 1 to lowercase; 0 to not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
