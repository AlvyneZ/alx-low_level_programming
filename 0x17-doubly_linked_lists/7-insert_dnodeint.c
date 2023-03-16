#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node into a specific location of a
 *  doubly linked list
 * @h: List to be manipulated
 * @idx: Location where node is to be added
 * @n: Value of node to be added
 * Return: Added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt;
	dlistint_t *curs, *new_node, *prev_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	curs = (*h);
	cnt = 0;
	if (curs == NULL)
	{
		prev_node = NULL;
	}
	else
	{
		do {
			prev_node = curs;
			curs = curs->next;
		} while ((curs != NULL) && (cnt < idx));
	}
	if (cnt != idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curs;
	new_node->prev = prev_node;
	if (curs != NULL)
		curs->prev = new_node;
	if (idx == 0)
		(*h) = new_node;
	else
		new_node->prev->next = new_node;

	return (new_node);
}
