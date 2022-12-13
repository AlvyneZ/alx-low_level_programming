#include "main.h"

/**
 * print_sign- Checks the sign of a number
 * @n: Number to be checked
 * Return: 1 if greater than zero; -1 if less than zero & 0 if equal to zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
