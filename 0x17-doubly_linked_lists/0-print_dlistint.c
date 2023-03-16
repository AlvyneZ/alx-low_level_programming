#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints out the values of a doubly linked list
 * @h: List to be printed
 * Return: Number of elements in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; h = h->next, cnt++)
	{
		printf("%d\n", h->n);
	}
	return (cnt);
}
