#include "lists.h"

/**
 * dlistint_len - returns size of a double list
 * @h: header of list
 *
 * Return: size of list --
 * for Holberton project
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
