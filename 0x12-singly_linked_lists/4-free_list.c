#include "lists.h"

/**
 * free_list - free space of  a list
 * @head: pointer to list to analize
 *
 * Return: void function
 */

void free_list(list_t *head)
{
	if (head)
	{
		while (head)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
	}
}
