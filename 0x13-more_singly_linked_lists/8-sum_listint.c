#include "lists.h"

/**
 * sum_listint - Sums all the values of a singly linked list
 * @head: List to be sumed
 * Return: Sum of data stored in list
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next, sum++)
		sum += head->n;
	return (sum);
}
