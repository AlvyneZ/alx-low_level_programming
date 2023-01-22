#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums up all its parameters
 * @n: Parameters count
 * Return: Resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list var;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
