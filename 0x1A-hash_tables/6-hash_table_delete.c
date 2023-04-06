#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Frees all memory used up by a hash table
 *
 * @ht: Pointer to the hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		for (node = ht->array[idx]; node != NULL; node = temp)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
