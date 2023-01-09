#include "main.h"

/**
* _strncat - Concatenates a string (with a max) to another string
 * @dest: Destination to append string at the end
 * @src: Source string to copy from
 * @n: Maximum bytes of src to be used
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destCurs;
	int len, ind;

	len = _strlen(dest);
	destCurs = dest + len;
	ind = 0;
	for (; ((*(src + ind) != '\0') && (ind < n)); ind++, destCurs++)
		*destCurs = *(src + ind);
	*destCurs = '\0';

	return (dest);
}
