#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints all its parameters (strings) with
 *  a specified separator, then followed by a newline
 * @separator: string to place in between printed strings
 * @n: Parameters count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list var;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(var, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(var, char *);
		printf((str == NULL) ? "(nil)" : str);
		if (i == n)
			printf("\n");
		else if (separator != NULL)
			printf(separator);
	}
	va_end(var);
}
