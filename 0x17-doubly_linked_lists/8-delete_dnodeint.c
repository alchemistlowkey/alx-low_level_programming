#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @head: double pointer
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *lost;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index; i++)
	{
		lost = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		return (-1);
	}
	lost->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = lost;
	}
	free(tmp);
	return (1);
}
