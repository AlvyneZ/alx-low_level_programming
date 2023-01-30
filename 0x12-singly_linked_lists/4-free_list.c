#include "lists.h"

/**
 * free_list - frees memory allocated for strings of linked list
 * @head: List whose elements are to be freed
 */
void free_list(list_t *head)
{
	list_t *prev = NULL;

	while (head != NULL)
	{
		free(head->str);
		prev = head;
		head = head->next;
		free(prev);
	}
}
