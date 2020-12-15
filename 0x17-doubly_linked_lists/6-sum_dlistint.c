#include "lists.h"

/**
 * sum_dlistint - Adds numbers stored in all nodes in list
 *
 * @head: head of list
 *
 * Return: total of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		total = total + tmp->n;
		tmp = tmp->next;
	}
	return (total);
}
