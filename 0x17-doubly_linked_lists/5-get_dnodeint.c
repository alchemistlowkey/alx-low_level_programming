#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer
 * @index: index of the node from 0
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	for (i = 0; tmp != NULL; i++)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
