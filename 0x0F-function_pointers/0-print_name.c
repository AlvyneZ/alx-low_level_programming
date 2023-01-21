#include "function_pointers.h"
#include <stdio.h>

/**
* _puts - Prints a string
 * @s: String to be printed
 */
void _puts(char *s)
{
	for (; (*s != '\0'); s++)
		putchar(*s);
}

/**
 * print_name - Wrapper function for printing a name
 *  using different functions with different styles
 * @name: Name to be printed
 * @f: Pointer to function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	_puts("Hello, my name is ");
	(*f)(name);
}
