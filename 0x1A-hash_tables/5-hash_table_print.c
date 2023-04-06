#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table likke a dictionary
 *
 * @ht: Pointer to the hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int first = 1;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		for (node = ht->array[idx]; node != NULL; node = node->next)
		{
			if (!first)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			first = 0;
		}
	}
	printf("}\n");
}
