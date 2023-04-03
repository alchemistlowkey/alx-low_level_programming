#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: const listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
