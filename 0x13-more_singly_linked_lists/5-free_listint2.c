#include "lists.h"

/**
 * free_listint2 - aply memory free to a list and format last in NULL
 * @head: pointer to list to analize
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		while (head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	head = NULL;
}
