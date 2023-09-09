#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: The hash table to look
 * @key: The key to look for
 * Return: The value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	hash_node_t *tmp;

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
