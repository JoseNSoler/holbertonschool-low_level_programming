#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of table to generate
 *
 * Return: Succes  - pointer to new hash table.
 *         In error- NULL.
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int x = 0;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (; x < size; x++)
		hasht->array[x] = NULL;

	return (hasht);
}
