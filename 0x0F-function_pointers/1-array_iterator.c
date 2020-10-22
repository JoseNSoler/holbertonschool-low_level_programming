#include "function_pointers.h"

/**
 * array_iterator - iterate an array and pass through a function
 *
 * @array: pointer of array to analize
 * @size: size of num of times to iterate on array
 * @action: function to use
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t x = 0;

	if (array && size && action)
	{
		for (; x < size; x++)
			action(array[x]);
	}
}
