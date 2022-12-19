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
	int ind;

	ind = _strlen(str);
	if (ind % 2)
		ind++;
	ind /= 2;
	for (str += ind; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
