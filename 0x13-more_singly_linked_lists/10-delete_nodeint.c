#include "lists.h"

/**
 * delete_nodeint_at_index - Deletion of node at index
 * @head: double pointer listint_t
 * @index: unsigned integer
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *del, *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				return (-1);
			}
		}
		del = tmp;
		del = del->next;
		tmp->next = del->next;
		free(del);
	}
	return (-1);
}
