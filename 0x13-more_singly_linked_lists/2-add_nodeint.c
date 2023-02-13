#include "lists.h"

/**
 * add_nodeint - Prepends a new node to a singly linked list
 * @head: List to be prepended to
 * @n: integer to be added
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
