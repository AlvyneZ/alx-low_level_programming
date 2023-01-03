#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_negative - Print a negative multiple digit number
 * @n: Number to print
 * Return: 1 if number is negative, 0 otherwise
 */
int print_negative(int n)
{
	int max;
	int zeros;

	zeros = 0;
	if (n < 0)
	{
		_putchar('-');
		for (max = -1000000000; max <= -1; max /= 10)
		{
			if (max == -1)
			{
				zeros = 1;
			}
			if (n > max)
			{
				if (zeros)
					_putchar('0');
			}
			else
			{
				zeros = 1;
				_putchar('0' + (n / max));
				n %= (-max);
			}
		}
		return (1);
	}
	return (0);
}

/**
 * print_number - Print a multiple digit number including negative sign
 * @n: Number to print
 */
void print_number(int n)
{
	int max;
	int zeros;

	zeros = 0;
	if (!(print_negative(n)))
	{
		for (max = 1000000000; max >= 1; max /= 10)
		{
			if (max == 1)
			{
				zeros = 1;
			}
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
}

/**
 * print_diagsums - Prints the sum of the two diagonals of a
 *   square matrix of integers
 * @a: Memory area of square matrix
 * @size: Size of matrix
 */
void print_diagsums(int *a, int size)
{
	int curs, sum, lim;

	sum = 0;
	lim = size * size;
	for (curs = 0; curs < lim; curs += size + 1)
	{
		sum += a[curs];
	}
	print_number(sum);
	_putchar(',');
	_putchar(' ');
	sum = 0;
	lim = size * (size - 1);
	for (curs = size - 1; curs <= lim; curs += size - 1)
	{
		sum += a[curs];
	}
	print_number(sum);
	_putchar('\n');
}
