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
 * str_concat - Concatenates two strings into a new string
 * @s1: First String
 * @s2: Second String
 * Return: a pointer to the concatenated string, or NULL if
 *  it fails or provided strings are NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	int len, l1;

	l1 = 0;
	len = 0;
	if (s1 != NULL)
		l1 = _strlen(s1);
	if (s2 != NULL)
		len = _strlen(s2);
	len += l1 + 1;
	if ((s2 == NULL) && (s2 == NULL))
		return (NULL);
	out = malloc(len);
	if (out == NULL)
		return (NULL);
	if (s1 != NULL)
		_strcpy(out, s1);
	if (s2 != NULL)
		_strcpy(&(out[l1]), s1);
	return (out);
}
