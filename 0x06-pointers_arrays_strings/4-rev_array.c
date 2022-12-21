#include "main.h"

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
* reverse_array - Reverses an integer array
 * @a: Array to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int ind;
	int tmp;

	n--;
	for (ind = 0; ind <= (n / 2); ind++)
	{
		tmp = a[n - ind];
		a[n - ind] = a[ind];
		a[ind] = tmp;
	}
}
