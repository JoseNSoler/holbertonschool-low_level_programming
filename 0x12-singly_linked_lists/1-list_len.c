#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: list to analize
 *
 * Return: x - number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int x = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			x++;
		}
	}
	return (x);
}
