#include "lists.h"

/**
 * sum_dlistint - Sums all the values of a doubly linked list
 * @head: List to be sumed
 * Return: Sum of data stored in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
