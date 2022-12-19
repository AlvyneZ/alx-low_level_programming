#include "main.h"

/**
* _strlen - Gets the length of a string
 * @s: String whose length is required
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int ind;

	for (ind = 0; (*(s + ind) != '\0'); ind++)
	;
	return (ind);
}

/**
* print_rev - Prints a string in reverse
 * @s: String to be printed in reverse
 */
void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1; len >= 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
