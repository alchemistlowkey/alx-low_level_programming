#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting new node at a given position
 * @head: double pointer listint_t
 * @idx: unsigned integer
 * @n: integer
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	tmp = *head;
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;
	for (i = 1; i < idx; i++)
	{
		tmp = tmp->next;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}
	return (new_node);
}
