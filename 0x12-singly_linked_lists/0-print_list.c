#include "lists.h"

/**
 * print_list - prints elements in a list
 * @h: list to analize
 *
 * Return: x - number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int x = 0;

	if (h)
	{
		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			x++;
		}
	}
	return (x);
}
