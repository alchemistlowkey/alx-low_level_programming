#include "hash_tables.h"

/**
 * hash_table_create - A function that creates hash table.
 * @size: Hash table size
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = NULL;

	if (size < 1)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);

	if (new->array == NULL)
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
