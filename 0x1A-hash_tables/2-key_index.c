#include "hash_tables.h"

/**
 * key_index - Returns index in a format key/value
 *             should be stored in a hash table
 * @key: Key to get the index
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
