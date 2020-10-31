#include "lists.h"

/**
 * add_node_end - add a new node in the end of a list
 * @head: pointer at the last head
 * @str: string to add
 *
 * Return: new-- the address of the new element - or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int len = 0;

	if (!head)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	tmp = *head;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!tmp)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
