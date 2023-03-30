#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t i;

	if (str == NULL)
	{
		i = 0;
	}
	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
