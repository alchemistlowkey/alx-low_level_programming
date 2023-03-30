#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_node->len = i;
	*head = new_node;

	return (*head);
}
