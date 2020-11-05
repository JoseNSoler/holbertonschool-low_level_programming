#include "lists.h"

/**
 * get_nodeint_at_index - returns the n node requested in a list
 * @head: pointer to head to analize
 * @index: index to find
 *
 * Return: position node requested
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head)
	{
		for (x = 0; x < index; x++)
		{
			head = head->next;
			if (!head)
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
