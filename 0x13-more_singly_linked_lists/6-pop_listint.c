#include "lists.h"

/**
 * pop_listint - deletes the head node-element of a linked list
 * @head: pointer to header
 *
 * Return: pointer to head-list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tempint = 0;

	temp = *head;
	if (temp)
	{
		tempint = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (tempint);
}
