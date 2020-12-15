#include "lists.h"

/**
 * get_dnodeint_at_index - returns node in index position
 * required
 *
 * @head: header of double list
 * @index: number index to find
 *
 * Return: Adress of required node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tmp = head;

	while (index > x)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp);
}
