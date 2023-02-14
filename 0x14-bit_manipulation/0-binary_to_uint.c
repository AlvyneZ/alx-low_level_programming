#include "main.h"

#define NULL ((void *)0)

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String of 0's and 1's of the binary number
 * Return: The conversion result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == NULL)
		return (0);
	for (i = 0; (*b) != '\0'; b++)
	{
		i *= 2;
		if ((*b) == '1')
		{
			i++;
		}
		else if ((*b) != '0')
		{
			return (0);
		}
	}
	return (i);
}
