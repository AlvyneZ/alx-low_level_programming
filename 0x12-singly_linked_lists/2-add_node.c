#include "lists.h"
#include <string.h>

/**
* _strlen - Gets the length of a string
 * @s: String whose length is required
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int ind;

	for (ind = 0; (*(s + ind) != '\0'); ind++)
	;
	return (ind);
}

/**
 * add_node - Prepends a new node to a singly linked list
 * @head: List to be prepended to
 * @str: string to be added
 * Return: Pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->len = _strlen(new_str);
	new_node->str = new_str;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
