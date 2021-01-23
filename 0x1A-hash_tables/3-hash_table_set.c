#include "hash_tables.h"

/**
 * hash_table_set - add a new node
 * @ht: pointer to hash table
 * @key: key - cannot be an empty string
 * @value: value for a key
 *
 * Return: 1-in succes -- 0-otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nNode, *tempo;
	unsigned long int n_index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	n_index = key_index((unsigned char *)key, ht->size);

	for (tempo = ht->array[n_index]; tempo != NULL; tempo = tempo->next)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = strdup(value);
			if (tempo->value == NULL)
				return (0);
			return (1);
		}
	}
	nNode = malloc(sizeof(hash_node_t));
	if (nNode == NULL)
		return (0);

	nNode->key = strdup(key);
	if (nNode->key == NULL)
	{
		free(nNode);
		return (0);
	}
	nNode->value = strdup(value);
	if (nNode->value == NULL)
	{
		free(nNode->key);
		free(nNode);
		return (0);
	}
	nNode->next = ht->array[n_index];
	ht->array[n_index] = nNode;
	return (1);
}
