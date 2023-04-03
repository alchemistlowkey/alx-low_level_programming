#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: const listint_t
 * Return: i(number of nodes)
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	printf("%d\n", h->n);
	return (i);
}
