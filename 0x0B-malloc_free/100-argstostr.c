#include "main.h"
#include <stdlib.h>

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
* _strcpy - Copies a string to another string
 * @dest: Destination to paste string
 * @src: Source string to copy from
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *destCurs, *srcCurs;

	srcCurs = src;
	destCurs = dest;
	for (; (*srcCurs != '\0'); srcCurs++, destCurs++)
		*destCurs = *srcCurs;
	*destCurs = '\0';

	return (dest);
}

/**
 * argstostr - Concatenates multiple strings into a new string
 * @ac: Number of strings
 * @av: Array of Strings
 * Return: a pointer to the concatenated string, or NULL if
 *  it fails
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int len, ind;

	if ((av == NULL) || (ac == 0))
		return (NULL);
	for (ind = 0, len = 0; ind < ac; ind++)
		len += 1 + _strlen(av[ind]);
	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	for (ind = 0, len = 0; ind < ac; ind++)
	{
		_strcpy(&(out[len]), av[ind]);
		len += _strlen(av[ind]);
		out[len++] = '\n';
	}
	out[len] = '\0';
	return (out);
}
