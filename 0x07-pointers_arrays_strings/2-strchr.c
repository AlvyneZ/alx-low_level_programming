#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched through
 * @c: Character to be searched for
 * Return: Pointer to first occurence of c or
 *  NULL if c is absent
 */
char *_strchr(char *s, char c)
{
	char *sCurs;

	sCurs = s;
	for (; (*sCurs != '\0'); sCurs++)
	{
		if (*sCurs == c)
			return sCurs;
	}
	return ((void *)0);
}
