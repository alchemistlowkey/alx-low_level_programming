#include "lists.h"

/**
 * find_listint_loop - TO find the loop in a list
 * @head: listint_t
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t i;
	listint_t *tmp, *new;

	tmp = head;
	new = head;
	for (i = 0; tmp && new && new->next && head != NULL; i++)
	{
		head = head->next;
		new = new->next->next;
		if (head == new)
		{
			head = tmp;
			tmp = new;
			while (tmp->next != head && tmp->next != new)
			{
				tmp = tmp->next;
			}
			if (tmp->next == head)
			{
				break;
			}
			head = head->next;
		}
		return (tmp->next);
	}
	return (NULL);
}
