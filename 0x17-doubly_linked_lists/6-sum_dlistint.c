#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a linked list
 * @head: pointer
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
