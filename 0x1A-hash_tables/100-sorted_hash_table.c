#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Allocates space in the heap for a new
 *  sorted hash table of specified size
 *
 * @size: Number of nodes the sorted hash table array is to have
 * Return: A pointer to the newly created sorted hash table,
 *  or NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shsh_tbl;

	shsh_tbl = malloc(sizeof(shash_table_t));
	if (shsh_tbl == NULL)
		return (NULL);
	shsh_tbl->array = calloc(size, sizeof(shash_node_t *));
	if (shsh_tbl->array == NULL)
	{
		free(shsh_tbl);
		return (NULL);
	}
	shsh_tbl->size = size;
	return (shsh_tbl);
}

/**
 * shash_table_sort_insert - Sets up the sorted doubly-linked list
 *  data structure for a new node of a sorted hash table
 *
 * @ht: Pointer to the sorted hash table
 * @node: The new node to be inserted into the hash table's sorted
 *  doubly-linked list
 * Return: None
 */
static void shash_table_sort_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *curs, *prev_node = NULL;

	if ((ht == NULL) || (node == NULL))
		return;
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	for (curs = ht->shead; curs != NULL; curs = curs->snext)
	{
		if (strcmp(node->key, curs->key) < 0)
			break;
		prev_node = curs;
	}
	if (ht->shead == curs)
		ht->shead = node;
	if (curs == NULL)
		ht->stail = node;
	else
		curs->sprev = node;
	if (prev_node != NULL)
		prev_node->snext = node;
	node->snext = curs;
	node->sprev = prev_node;
}

/**
 * shash_table_set - Allocates space in the heap for a new
 *  hash node and places it in the sorted hash table
 *
 * @ht: Pointer to the sorted hash table
 * @key: Key of the new node
 * @value: Data to be stored in the node
 * Return: 1 if suceeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *temp;
	shash_node_t *node;

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
	node = malloc(sizeof(shash_node_t));
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
	shash_table_sort_insert(ht, node);
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a given key
 *
 * @ht: Pointer to the sorted hash table
 * @key: Key whose value is required
 * Return: the value associated with the key,
 *  or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if ((ht == NULL) || (key == NULL) || (strlen(key) == 0))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[idx]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table like a dictionary
 *  using the sorted order
 *
 * @ht: Pointer to the sorted hash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (!first)
			printf(", ");
		printf("\'%s\': \'%s\'", node->key, node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table like a dictionary
 *  reversing the sorted order
 *
 * @ht: Pointer to the sorted hash table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		if (!first)
			printf(", ");
		printf("\'%s\': \'%s\'", node->key, node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Frees all memory used up by a sorted hash table
 *
 * @ht: Pointer to the sorted hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != NULL; node = temp)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	free(ht->array);
	free(ht);
}
