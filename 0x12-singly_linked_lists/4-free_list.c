#include "lists.h"

/**
 * free_list - free singly linked list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
