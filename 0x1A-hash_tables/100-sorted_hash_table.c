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
	shash_node_t *new, *tmp;
	unsigned long int index = 0;

	if (!ht || !key || *key == '\0' || !value)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
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
	unsigned long int i, j = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size - 1; i++)
		{
			if (ht->array[i] != NULL)
				j = i;
		}

		for (i = 0; i <= j; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (i < j - 1)
					printf(", ");
			}

		}
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
	shash_node_t *tmp;
	unsigned long int i = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	if (ht)
	{
		for (tmp = ht->stail; tmp != NULL; tmp = tmp->sprev)
		{
			if (i)
			{
				i = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
