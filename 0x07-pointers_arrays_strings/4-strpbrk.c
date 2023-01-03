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
	unsigned int curs;
	char *sCurs;

	for (sCurs = s; *sCurs != '\0'; sCurs++)
	{
		for (curs = 0; accept[curs] != '\0'; curs++)
		{
			if (*sCurs == accept[curs])
			{
				return (sCurs);
			}
		}
	}
	return (NULL);
}
