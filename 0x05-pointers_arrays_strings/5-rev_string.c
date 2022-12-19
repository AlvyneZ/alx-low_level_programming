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
* rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len, ind;
	char tmp;

	len = _strlen(s) - 1;
	for (ind = 0; ind <= (len / 2); ind++)
	{
		tmp = *(s + len - ind);
		*(s + len - ind) = *(s + ind);
		*(s + ind) = tmp;
	}
}
