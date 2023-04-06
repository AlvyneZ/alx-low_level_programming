#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Allocates space in the heap for a new
 *  hash table of specified size
 *
 * @size: Number of nodes the hash table is to have
 * Return: A pointer to the newly created hash table,
 *  or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_tbl;

	hsh_tbl = malloc(sizeof(hash_table_t));
	if (hsh_tbl == NULL)
		return (NULL);
	hsh_tbl->array = malloc(size * sizeof(hash_node_t *));
	if (hsh_tbl->array == NULL)
	{
		free(hsh_tbl);
		return (NULL);
	}
	hsh_tbl->size = size;
	return (hsh_tbl);
}
