#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key.
 * @key: The key in the has table.
 * @size: The size of the hash table
 * Return: value.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int value;

	index = hash_djb2((unsigned char *)key);
	value = index % size;
	return (value);
}
