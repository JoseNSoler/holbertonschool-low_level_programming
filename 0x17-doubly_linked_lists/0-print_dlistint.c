#include "lists.h"

/**
 * print_dlistint - prints a double list
 * @h: header of list
 *
 * Return: size of list --
 * for Holberton project
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
