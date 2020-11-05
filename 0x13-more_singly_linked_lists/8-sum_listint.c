#include "lists.h"

/**
 * sum_listint - returns sum of all elements inside the list
 * @head: pointer to header-list
 *
 * Return: sum- data elements sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
