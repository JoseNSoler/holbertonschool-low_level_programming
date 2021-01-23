#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a KEY item in a hash table
 * @ht: hash table to analyze
 * @key: key associated with value-node
 * 
 * Return:VALUE associated with the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempo;
	unsigned long int n_index;

	if (ht == NULL || key == NULL)
		return (NULL);

	n_index = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[n_index];

	if (tempo == NULL)
		return (NULL);

	while (strcmp(tempo->key, key) != 0)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);

	return (tempo->value);
}
