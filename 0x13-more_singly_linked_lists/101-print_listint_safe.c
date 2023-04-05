#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: const listint_t
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new, *tmp;
	size_t i;

	if (head == NULL)
	{
		exit(98);
	}
	new = head;
	tmp = head;
	for (i = 0; new && tmp && tmp->next && head->next && head != NULL; i++)
	{
		new = new->next;
		tmp = tmp->next->next;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (new == tmp)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	head = NULL;
	return (i);
}
