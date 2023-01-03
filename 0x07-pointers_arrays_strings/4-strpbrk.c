#include "main.h"
#define NULL ((void *)0)

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched through
 * @accept: Set of characters to be searched for
 * Return: Pointer to first occurence of any accept character or
 *  NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int curs2;
	char *sCurs;

	for (sCurs = s; sCurs != '\0'; sCurs++)
	{
		for (curs2 = 0; accept[curs2] != '\0'; curs2++)
		{
			if (sCurs == accept[curs2])
			{
				return (sCurs);
			}
		}
	}
	return (NULL);
}
