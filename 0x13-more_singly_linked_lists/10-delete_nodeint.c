#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific location of a
 *  singly linked list
 * @head: List to be manipulated
 * @index: Location where node is to be deleted
 * Return: 1 on success, or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt;
	listint_t *curs, *prev;

	if (head == NULL)
		return (-1);
	curs = (*head);
	for (cnt = 0; ((curs != NULL) && (cnt < index)); cnt++)
	{
		prev = curs;
		curs = curs->next;
	}
	if ((cnt != index) || (curs == NULL))
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = curs->next;
	}
	else
	{
		prev->next = curs->next;
	}
	free(curs);

	return (1);
}
