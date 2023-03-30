#include "lists.h"

/**
 * print_list - A function to print all the elements in a list
 * @h: const pointer to the list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
