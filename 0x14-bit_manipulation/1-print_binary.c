#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number whose binary representation is required
 */
void print_binary(unsigned long int n)
{
	unsigned long max;
	unsigned int zeros;

	zeros = 0;
	max = (sizeof(unsigned long int) * 8) - 1;
	for (max = (0x1UL << max); max >= 1UL; max >>= 1)
	{
		if (max == 1)
		{
			zeros = 1;
		}
		if (n & max)
		{
			zeros = 1;
			_putchar('1');
		}
		else
		{
			if (zeros)
			{
				_putchar('0');
			}
		}
	}
}
