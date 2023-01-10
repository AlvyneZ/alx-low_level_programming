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
 * _strdup - Duplicates a string
 * @str: String to be duplicated
 * Return: a pointer to the duplicated string, or NULL if
 *  it fails or provided string is NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(_strlen(str));
	if (dup != NULL)
		return (_strcpy(dup, str));
	return (NULL);
}
