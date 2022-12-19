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
* puts_half - Prints half of a string
 * @str: String to be half printed
 */
void puts_half(char *str)
{
	int len, ind;

	len = _strlen(str) / 2;
	for (ind = 0; ind < len; ind++)
	{
		_putchar(*(str + ind));
	}
	_putchar('\n');
}
