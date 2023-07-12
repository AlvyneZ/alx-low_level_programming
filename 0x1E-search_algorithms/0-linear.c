#include <stdio.h>

#define PRINT_AT_COMPARISON	1

/**
 * linear_search - searches for a value in an array of integers using
 *  the Linear search algorithm
 * @array: The array to search in
 * @size: The length of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if ((size < 1) || (array == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		#if (PRINT_AT_COMPARISON == 1)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		#endif
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
