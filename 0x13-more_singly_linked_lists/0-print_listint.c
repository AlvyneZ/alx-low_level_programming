#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints out the values of a singly linked list
 * @h: List to be printed
 * Return: Number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; h = h->next, cnt++)
	{
		printf("%d\n", h->n);
	}
	return (cnt);
}
