#include "main.h"

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

	len = _strlen(dest);
	srcCurs = src;
	destCurs = dest + len;
	for (; (*srcCurs != '\0'); srcCurs++, destCurs++)
		*destCurs = *srcCurs;
	*destCurs = '\0';

	return (dest);
}
