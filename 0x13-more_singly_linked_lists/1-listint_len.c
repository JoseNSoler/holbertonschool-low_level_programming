#include "lists.h"

/**
 * listint_len - Returns the number of elements from the header
 * @h: header to analize
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int x = 0;

	if (h)
	{
		while (h)
		{
			x++;
			h = h->next;
		}
	}
	return (x);
}
