#include "main.h"

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
