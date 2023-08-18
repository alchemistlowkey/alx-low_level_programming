#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to head
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return i;
}
