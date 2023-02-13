#include "lists.h"

/**
 * listint_len - Gets the number of elements in a singly linked list
 * @h: List whose node count is needed
 * Return: Number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; h = h->next, cnt++)
	;
	return (cnt);
}
