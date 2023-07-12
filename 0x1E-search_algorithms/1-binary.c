#include <stdio.h>

#define PRINT_AT_COMPARISON	1

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 * @array: The sorted array to search in
 * @size: The length of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int i, temp;
	size_t s_size;

	if ((size < 1) || (array == NULL))
		return (-1);
	for (i = 0, s_size = size; s_size > 0; i++)
	{
		#if (PRINT_AT_COMPARISON == 1)
		printf("Searching in array: ");
		print_array(&(array[i]), s_size);
		#endif
		temp = s_size / 2;
		if ((s_size % 2) == 0)
			temp--;		/* Remove 1 for even arrays (shorter left side)*/
		if (array[temp + i] == value)
			return (temp + i);
		if (s_size % 2)
		{
			s_size = temp;
			if (array[temp + i] > value)
				i += temp + 1;
		}
		else
		{
			s_size = temp;
			if (array[temp + i] > value)
			{
				s_size++;
				i += temp + 1;
			}
		}
	}
	return (-1);
}
