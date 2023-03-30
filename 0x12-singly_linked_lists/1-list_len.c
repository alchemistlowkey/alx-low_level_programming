#include "lists.h"

/**
 * list_len - A function to prints the length of elements in a list
 * @h: const pointer to the list
 * Return: i.
 */
size_t list_len(const list_t *h)
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
