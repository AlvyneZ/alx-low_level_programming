#include "lists.h"

/**
 * free_listint2 - frees memory allocated for strings of linked list
 *  and sets the head to NULL
 * @head: List whose elements are to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curs;

	if (head != NULL)
	{
		curs = (*head);
		while (curs != NULL)
		{
			prev = curs;
			curs = curs->next;
			free(prev);
		}
		(*head) = NULL;
	}
}
