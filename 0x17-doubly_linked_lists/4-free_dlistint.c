#include "lists.h"

/**
 * free_dlistint - frees memory allocated for doubly linked list
 * @head: List whose elements are to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = NULL;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
