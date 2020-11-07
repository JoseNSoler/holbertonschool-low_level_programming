#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 in the given index
 * @n: pointer to int to analize
 * @index: position to change bit from number
 *
 * Return: 1 in succes -- -1 on an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
