#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a specific node of a
 *  singly linked list
 * @head: List to be searched through
 * @index: Location of node to be found
 * Return: Node at the given location or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt;

	for (cnt = 0; ((head != NULL) && (cnt < index)); cnt++)
		head = head->next;
	return (head);
}
