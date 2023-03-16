#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a specific node of a
 *  doubly linked list
 * @head: List to be searched through
 * @index: Location of node to be found
 * Return: Node at the given location or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt;

	for (cnt = 0; ((head != NULL) && (cnt < index)); cnt++)
		head = head->next;
	return (head);
}
