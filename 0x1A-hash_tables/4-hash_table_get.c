#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a given key
 *
 * @ht: Pointer to the hash table
 * @key: Key whose value is required
 * Return: the value associated with the key,
 *  or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	idx = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[idx]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
