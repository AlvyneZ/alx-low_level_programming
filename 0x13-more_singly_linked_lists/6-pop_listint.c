#include "lists.h"

/**
 * pop_listint - Deletes head node and retrieves its data
 * @head: List to be manipulated
 * Return: data stored in removed head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL)
		return (0);
	node = (*head);
	if (node == NULL)
		return (0);
	n = node->n;
	(*head) = node->next;
	free_listint2(&node);
	return (n);
}
