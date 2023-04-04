#include "lists.h"

/**
 * free_listint2 - free listint_t list 2
 * @head: double pointer listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	i = *head;
	while (*head)
	{
		i = *head;
		(*head) = (*head)->next;
		free(i);
	}
	*head = NULL;
	free(*head);
}
