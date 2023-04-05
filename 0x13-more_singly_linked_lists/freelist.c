#include "lists.h"

/**
 * free_linked_list - function to free linked list
 * @head: listint_t
 * Return: nothing
 */
void free_linked_list(listint_t *head)
{
	int i;
	listint_t *tmp;

	for (i = 0; head != NULL; i++)
	{
		if (head)
		{
			tmp = head;
			tmp = tmp->next;
			free(tmp);
			free_linked_list(tmp);
		}
		free(head);
	}
}
