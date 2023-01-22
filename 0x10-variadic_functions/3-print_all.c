#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_int- Prints an integer from the first element of
 *  a given variable list
 * @var: Pointer to the variable list
 */
void print_int(va_list *var)
{
	printf("%d", va_arg(*var, int));
}

/**
 * print_float- Prints a float from the first element of
 *  a given variable list
 * @var: Pointer to the variable list
 */
void print_float(va_list *var)
{
	printf("%f", va_arg(*var, double));
}

/**
 * print_char- Prints a char from the first element of
 *  a given variable list
 * @var: Pointer to the variable list
 */
void print_char(va_list *var)
{
	printf("%c", va_arg(*var, int));
}

/**
 * print_str- Prints a string from the first element of
 *  a given variable list
 * @var: Pointer to the variable list
 */
void print_str(va_list *var)
{
	char *str, *nil = "(nil)";

	str = va_arg(*var, char *);
	if (str == NULL)
	{
		printf("%s", nil);
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints all its parameters (any type) given
 *  a list of types, then followed by a newline
 * @format: list of the types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *sep;
	va_list var;
	format_spec_t form[] = {
		{'c', &print_char},
		{'i', &print_int},
		{'f', &print_float},
		{'s', &print_str}
	};

	va_start(var, format);
	i = 0;
	sep = "";
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == form[j].spec)
			{
				printf("%s", sep);
				sep = ", ";
				form[j].print_func(&var);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(var);
}
