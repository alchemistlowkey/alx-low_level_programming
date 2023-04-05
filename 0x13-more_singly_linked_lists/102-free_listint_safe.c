#include "lists.h"

/**
 * free_listint_safe - frees a listint_t
 * @h: double pointer listint_t
 * Return: i
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *new_node, *list;
	size_t i;

	tmp = *h;
	for (i = 0; tmp != NULL; i++)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			exit(98);
		}
		new_node->next = list;
		list = new_node;
		tmp = *h;
		tmp = tmp->next;
		free_linked_list(tmp);
	}
	*h = NULL;
	free_linked_list(list);
	return (i);
}

/**
 * free_linked_list - function to free linked list
 * @head: listint_t
 * Return: nothing
 */
void free_linked_list(listint_t *head)
{
	int i;
	listint_t *tmp;

	if (head != NULL)
	{
		for (i = 0; tmp != NULL; i++)
		{
			tmp = head;
			tmp = tmp->next;
			free(tmp);
		}
		head = NULL;
	}
}
