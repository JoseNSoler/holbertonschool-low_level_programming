#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 *
 * @array: pointer of array to analize
 * @size: size of num of times to iterate on array
 * @cmp: function to use to compare values
 *
 * Return: -1 if: .no elements matches, .if size is <= 0 --
 * returns int of match in function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0)
		return (-1);
	if (array && size && action)
	{
		for (; x < size; x++)
			if (cmp(array[x]) != 0)
				return (x);
	}
	return (-1);
}
