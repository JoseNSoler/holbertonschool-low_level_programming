#include "lists.h"

/**
 * free_dlistint - free a double link list
 * @head: header of list

 * Return: void function.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}

	free(head);
}
