#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to a doubly linked list
 * @head: List to be appended to
 * @n: integer to be added
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	do {
		prev_node = (*head);
		head = &((*head)->next);
	} while ((*head) != NULL);
	new_node->prev = prev_node;
	*head = new_node;
	return (new_node);
}
