#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specific location of a
 *  doubly linked list
 * @head: List to be manipulated
 * @index: Location where node is to be deleted
 * Return: 1 on success, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cnt;
	dlistint_t *curs;

	if (head == NULL)
		return (-1);
	curs = (*head);
	for (cnt = 0; ((curs != NULL) && (cnt < index)); curs = curs->next, cnt++)
	;
	if ((cnt != index) || (curs == NULL))
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = curs->next;
		(*head)->prev = NULL;
	}
	else
	{
		curs->prev->next = curs->next;
		curs->next->prev = curs->prev;
	}
	free(curs);

	return (1);
}
