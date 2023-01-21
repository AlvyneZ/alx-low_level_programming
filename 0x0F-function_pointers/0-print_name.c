#include "function_pointers.h"

/**
 * print_name - Wrapper function for printing a name
 *  using different functions with different styles
 * @name: Name to be printed
 * @f: Pointer to function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
