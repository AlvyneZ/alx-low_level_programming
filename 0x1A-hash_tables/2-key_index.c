#include "hash_tables.h"

/**
 * key_index - Gets the hash table index for a given key
 *  using the djb2 algorithm
 *
 * @key: The key to be converted into an index
 * @size: Number of nodes the hash table array has
 * Return: The corresponding index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
