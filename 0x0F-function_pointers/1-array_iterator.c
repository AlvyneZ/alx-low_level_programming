#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Repeatedly runs a function on
 *  elements of an array
 * @array: Array whose elements are the subject of
 *  the given action
 * @size: Length of the array
 * @action: Pointer to function to be used to iterate
 *  on the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ind;

	if ((array == NULL) || (action == NULL) || (size == 0))
		return;
	for (ind = 0; ind < size; ind++)
	{
		(*action)(array[ind]);
	}
}
