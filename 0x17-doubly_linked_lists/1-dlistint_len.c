#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in a doubly linked list
 * @h: List whose node count is needed
 * Return: Number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; h = h->next, cnt++)
	;
	return (cnt);
}
