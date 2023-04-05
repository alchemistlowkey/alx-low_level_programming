#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t
 * @head: double pointer listint_t
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	int i;
	listint_t *new, *tmp;

	tmp = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	for (i = 0; (*head) != NULL; i++)
	{
		new = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = new;
	}
	*head = tmp;
	return (*head);
}
