#include "holberton.h"

/**
 * get_bit - returns value of the bit in the given index
 * @n: number to analize
 * @index: position to use in a bit from n
 *
 * Return: value of the bit at index -- -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index < sizeof(n) * 8)
	{
		for (x = 0; x < index; x++)
			n = n >> 1;
		if (n & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
