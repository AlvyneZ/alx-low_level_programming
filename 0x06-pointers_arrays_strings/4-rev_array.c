#include "main.h"

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
	if (n <= 0)
		return;
	for (ind = 0; ind <= (n / 2); ind++)
	{
		tmp = a[n - ind];
		a[n - ind] = a[ind];
		a[ind] = tmp;
	}
}
