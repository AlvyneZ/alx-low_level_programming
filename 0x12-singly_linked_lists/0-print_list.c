#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints out the values of a singly linked list
 * @h: List to be printed
 * Return: Number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; h = h->next, cnt++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (cnt);
}
