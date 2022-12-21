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
* _strcat - Concatenates a string to another string
 * @dest: Destination to append string at the end
 * @src: Source string to copy from
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *destCurs, *srcCurs;
	int len;

	len = _strlen(src);
	srcCurs = src;
	destCurs = dest + len;
	for (; (*srcCurs != '\0'); srcCurs++, destCurs++)
		*destCurs = *srcCurs;
	*destCurs = '\0';

	return (dest);
}
