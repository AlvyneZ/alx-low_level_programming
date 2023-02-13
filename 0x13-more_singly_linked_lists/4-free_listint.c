#include "lists.h"

/**
 * free_listint - frees memory allocated for strings of linked list
 * @head: List whose elements are to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *prev = NULL;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
