#include "main.h"

/**
* _strncpy - Copies a string (with a max) to another string
 * @dest: Destination to paste string
 * @src: Source string to copy from
 * @n: Maximum bytes of src to be used and bytes to write
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind;

	ind = 0;
	for (; ((*(src + ind) != '\0') && (ind < n)); ind++)
		dest[ind] = src[ind];
	for (; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
