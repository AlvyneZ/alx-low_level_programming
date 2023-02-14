#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: Number where the bit is to be set
 * @index: position of the bit
 * Return: 1 if success, or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	(*n) |= (1UL << index);
	return (1);
}
