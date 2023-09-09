#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to set.
 * @value: The value to set.
 * Return: Success or failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
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
	new = malloc(sizeof(hash_node_t));
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
