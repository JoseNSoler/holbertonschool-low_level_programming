#include "lists.h"

/**
 * add_dnodeint_end - adds a new node in the end of a list
 * @head: head list
 * @n: number to create in node
 *
 * Return: Adress to node created -- NULL on error
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *tmp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		node->n = n;
		tmp = node;
		*head = node;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		node->prev = tmp;
		tmp->next = node;
		node->next = NULL;
		node->n = n;
	}
	return (node);
}
