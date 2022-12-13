#include "main.h"

/**
 * print_last_digit- Print the last digit of a number
 * @n: Number whose last digit is needed
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar('0' - a);
		a = -a;
	}
	else
	{
		_putchar('0' + a);
	}
	return (a);
}
