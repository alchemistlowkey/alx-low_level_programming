#include "hash_tables.h"

/**
 * shash_table_create - A function that creates shash table.
 * @size: Shash table size
 * Return: A pointer to the shash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new = NULL;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}

/**
 * shash_table_set - A function that adds an element to the shash table.
 * @ht: A pointer to the shash table.
 * @key: The key to set.
 * @value: The value to set.
 * Return: Success or failure.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		node = ht->shead;
		while (node->snext != NULL && strcmp(key, node->snext->key) > 0)
			node = node->snext;
		new_node->sprev = node;
		new_node->snext = node->snext;
		if (node->snext != NULL)
			node->snext->sprev = new_node;
		node->snext = new_node;
	}
	if (ht->stail == NULL || strcmp(key, ht->stail->key) > 0)
		ht->stail = new_node;
	return (1);
}

/**
 * shash_table_get - A function that retrieves a value associated with a key
 * @ht: The shash table to look
 * @key: The key to look for
 * Return: The value associated with the element, or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	shash_node_t *tmp;

	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		return (NULL);
	}

	tmp = ht->array[index];
	while (!value)
	{
		if (strcmp(tmp->key, key) == 0)
			value = tmp->value;
		tmp = tmp->next;
	}
	return (value);
}

/**
 * shash_table_print - A function that prints a shash table
 * @ht: shash table
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	int i = 1;
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (i)
		{
			i = 0;
		}
		else
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a shash table
 * @ht: The shash table
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *tmp;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		free(ht->array);
	}
	free(ht);
}

/**
 * shash_table_print_rev - A function that prints sorted shash table in reverse
 * @ht: The sorted shash table
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int i = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		if (i)
		{
			i = 0;
		}
		else
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
	}
	printf("}\n");
}
