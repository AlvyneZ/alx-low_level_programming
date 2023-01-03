#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 *   to by s with the constant byte b
 * @s: Memory area to be edited
 * @b: Byte to be filled into the memory area
 * @n: bytes to be filled
 * Return: Edited memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int curs;

	for (curs = 0; curs < n; curs++)
	{
		s[curs] = b;
	}
	return (s);
}
