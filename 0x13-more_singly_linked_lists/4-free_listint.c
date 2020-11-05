#include "lists.h"

/**
 * free_listint - aply memory free to a list
 * @head: pointer to list to analize
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
