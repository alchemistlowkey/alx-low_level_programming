#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @n: const integer
 * @head: double pointer listint_t
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (*head);
}
