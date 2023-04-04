#include "lists.h"

/**
 * pop_listint - A function that deletes head node
 * @head: double pointer listint_t
 * Return: integer (i)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new_node;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	free(*head);
	return (i);
}
