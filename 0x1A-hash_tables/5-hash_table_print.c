#include "hash_tables.h"

/**
 * hash_table_print -function that prints a hash table
 * @ht: hash table to analyze
 * Return: void function
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int x = 0;
	unsigned long int n_index = 0;
	hash_node_t *tempo = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (n_index = 0; n_index < ht->size; n_index++)
	{
		tempo = ht->array[n_index];
		while (tempo != NULL)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", tempo->key, tempo->value);
			x = 1;
			tempo = tempo->next;
		}
	}
	printf("}\n");
}
