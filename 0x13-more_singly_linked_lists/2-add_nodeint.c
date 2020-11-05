#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer last head
 * @n: integer of the new element
 *
 * Return: new- pointer to new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}
