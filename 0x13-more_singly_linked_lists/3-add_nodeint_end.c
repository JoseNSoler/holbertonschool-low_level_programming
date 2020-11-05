#include "lists.h"

/**
 * add_nodeint_end - adds a new element at the end of list
 * @head: pointer to header to analize
 * @n: integer
 *
 * Return: pointer to new element -NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		temp = *head;
		new->n = n;
		new->next = NULL;
		if (!temp)
			*head = new;
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
		return (new);
	}
	return (NULL);
}
