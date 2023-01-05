#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is needed
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	return (n * factorial(n - 1));
}
