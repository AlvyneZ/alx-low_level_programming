#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *  to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Count of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long max;
	unsigned int count;

	count = 0;
	n = n ^ m;
	max = (sizeof(unsigned long int) * 8) - 1;
	for (max = (0x1UL << max); max >= 1UL; max >>= 1)
	{
		if (n & max)
		{
			count++;
		}
	}
	return (count);
}
