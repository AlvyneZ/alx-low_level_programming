#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Allocates space in the heap for a new
 *  hash node and places it in the hash table
 *
 * @ht: Pointer to the hash table
 * @key: Key of the new node
 * @value: Data to be stored in the node
 * Return: 1 if suceeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(strlen(key));
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = malloc(strlen(value));
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	idx = key_index(key, ht->size);

	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
