#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a node at a given position
 * @h: double pointer
 * @idx: index of new node
 * @n: value of new node
 * Return: new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; tmp != NULL && i < idx - 1; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		return (NULL);
	}
	if (tmp->next  == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
