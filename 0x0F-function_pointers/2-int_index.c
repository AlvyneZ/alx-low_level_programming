#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Repeatedly runs a compare function on
 *  elements of an array to find an element
 * @array: Array whose elements are the subject of
 *  the given action
 * @size: Length of the array
 * @cmp: Pointer to function to be used to compare
 *  the array elements
 * Return: The index of the first element for which the
 *  compare result is not 0, or -1 if no matches found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if ((*cmp)(array[ind]))
			return (ind);
	}
	return (-1);
}
