#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
