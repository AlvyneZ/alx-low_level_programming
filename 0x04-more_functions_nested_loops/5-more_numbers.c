#include "main.h"

/**
 * print_number_simple - Print a multiple digit number
 * @n: Number to print
 */
void print_number_simple(int n)
{
	int max;
	int zeros;

	zeros = 0;
	for (max = 1000000000; max >= 1; max /= 10)
	{
		if (n < max)
		{
			if (zeros)
				_putchar('0');
		}
		else
		{
			zeros = 1;
			_putchar('0' + (n / max));
			n %= max;
		}
	}
}

/**
 * more_numbers - Prints out the 0 to 14 ten times
 */
void more_numbers(void)
{
	int num;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		num = 0;
		do {
			print_number_simple(num++);
		} while (num <= 14);
		_putchar('\n');
	}
}
