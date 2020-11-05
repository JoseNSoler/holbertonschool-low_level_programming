
#include "lists.h"

/**
 * print_listint - prints all the elements in a list
 * @h: header to analize
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	if (h)
	{
		while (h)
		{
			printf("%i\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}
