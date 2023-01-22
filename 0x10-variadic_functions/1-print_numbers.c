#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints all its parameters (integers) with
 *  a specified separator, then followed by a newline
 * @separator: string to place in between printed numbers
 * @n: Parameters count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list var;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(var, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i == n)
			printf("\n");
		else if (separator != NULL)
			printf(separator);
	}
	va_end(var);
}
