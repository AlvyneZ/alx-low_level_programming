#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node into a specific location of a
 *  singly linked list
 * @head: List to be manipulated
 * @idx: Location where node is to be added
 * @n: Value of node to be added
 * Return: Added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt;
	listint_t *curs, *prev, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	curs = (*head);
	for (cnt = 0; ((curs != NULL) && (cnt < idx)); cnt++)
	{
		prev = curs;
		curs = curs->next;
	}
	if (cnt != idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curs;
	if (prev == (*head))
	{
		(*head) = new_node;
	}
	else
	{
		prev->next = new_node;
	}

	return (new_node);
}
