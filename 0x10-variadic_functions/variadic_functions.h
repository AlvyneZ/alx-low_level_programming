#ifndef VAR_FUNC_HEADER
#define VAR_FUNC_HEADER

#include <stdarg.h>

typedef void (*print_func_t)(va_list *);

/**
 * struct format_spec_s - Format specifier details
 * @spec: Type Specifier character
 * @print_func: Function to print the given type
 */
typedef struct format_spec_s
{
	char spec;
	print_func_t print_func;
} format_spec_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNC_HEADER */
