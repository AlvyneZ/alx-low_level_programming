#include "lists.h"

/**
 * add_nodeint_end - Appends a new node to a singly linked list
 * @head: List to be appended to
 * @n: integer to be added
 * Return: Pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	for (; (*head) != NULL; head = &((*head)->next))
	;
	*head = new_node;
	return (new_node);
}
