#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: listint_t
 * @index: unsigned integer
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
	{
		head = head->next;
	}
	if (i == index)
	{
		return (head);
	}
	return (NULL);
}
