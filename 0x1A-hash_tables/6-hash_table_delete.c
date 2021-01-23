#include"hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int n_index;
	hash_node_t *list;

	for (n_index = 0; n_index < ht->size; n_index++)
	{
		while (ht->array[n_index] != NULL)
		{
			list = ht->array[n_index]->next;
			free(ht->array[n_index]->value);
			free(ht->array[n_index]->key);
			free(ht->array[n_index]);
			ht->array[n_index] = list;
		}
	}
	free(ht->array);
	free(ht);
}
