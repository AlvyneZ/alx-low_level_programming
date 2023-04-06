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
	char *temp;
	hash_node_t *node;

	if ((ht == NULL) || (key == NULL) || (value == NULL) || (strlen(key) == 0))
		return (0);
	temp = malloc(strlen(value) + 1);
	if (temp == NULL)
		return (0);
	strcpy(temp, value);

	idx = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[idx]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = temp;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(temp);
		return (0);
	}
	node->value = temp;
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
	{
		free(temp);
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
