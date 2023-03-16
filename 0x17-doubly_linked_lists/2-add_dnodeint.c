#include "lists.h"

/**
 * add_dnodeint - Prepends a new node to a doubly linked list
 * @head: List to be prepended to
 * @n: integer to be added
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*head)->prev = new_node;
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	(*head) = new_node;
	return (new_node);
}
