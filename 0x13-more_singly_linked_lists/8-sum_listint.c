#include "lists.h"

/**
 * sum_listint - Returns the sum of all data
 * @head: listint_t
 * Return: addition of values (add)
 */
int sum_listint(listint_t *head)
{
	int i, add = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
