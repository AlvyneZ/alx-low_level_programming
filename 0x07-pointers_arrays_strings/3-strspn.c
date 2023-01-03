#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
 * @s: String through which substring letters are searched
 * @accept: substring
 * Return: number of bytes in the initial segment of s which
 *  consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int curs, found, curs2;

	for (curs = 0; s[curs] != '\0'; curs++)
	{
		found = 0;
		for (curs2 = 0; accept[curs2] != '\0'; curs2++)
		{
			found = 1;
			break;
		}
		if (!found)
			return (curs);
	}
	return (curs);
}
