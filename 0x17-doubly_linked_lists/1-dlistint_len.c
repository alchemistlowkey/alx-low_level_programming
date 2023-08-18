#include "lists.h"

/**
 * dlistint_len - returns the  number of elements of a linked dlistint_t list
 * @h: points to the head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
