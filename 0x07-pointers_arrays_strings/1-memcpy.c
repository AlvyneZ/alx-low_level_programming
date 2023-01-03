#include "main.h"

/**
* _memcpy -  Copies n bytes from memory area src to
 *  memory area dest
 * @dest: Destination to paste bytes
 * @src: Source memory area to copy from
 * @n: Maximum bytes of src to be used and bytes to write
 * Return: destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int curs;

	for (curs = 0; curs < n; curs++)
	{
		dest[curs] = src[curs];
	}
	return (dest);
}
