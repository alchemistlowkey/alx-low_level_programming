#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	for (i = head; head != NULL;)
	{
		head = head->next;
		free(head);
		free(i);
	}
}