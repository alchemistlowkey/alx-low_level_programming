#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *tmp = NULL;

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
