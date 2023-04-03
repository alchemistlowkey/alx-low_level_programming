#include "lists.h"

/**
 * add_nodeint - To add a new node at the beginning of a list
 * @n: const integer
 * @head: double pointer listint_t
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	size_t i = 0;

	while (i)
	{
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->next = *head;
	}
	new_node->n = n;
	*head = new_node;
	return (*head);
}
