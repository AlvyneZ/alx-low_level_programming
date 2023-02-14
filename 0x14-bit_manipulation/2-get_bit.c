#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number where the bit is to be searched
 * @index: position of the bit
 * Return: The bit value or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	if (n & 1UL)
		return (1);
	return (0);
}
