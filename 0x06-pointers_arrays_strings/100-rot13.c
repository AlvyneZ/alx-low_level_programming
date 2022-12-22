#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be edited
 * Return: Edited string
 */
char *rot13(char *s)
{
	char *sCurs;

	for (sCurs = s; (*sCurs != '\0'); sCurs++)
	{
		if (((*sCurs >= 'n') && (*sCurs <= 'z')) ||
		((*sCurs >= 'N') && (*sCurs <= 'Z')))
		{
			*sCurs -= 26;
		}
		if (((*sCurs >= ('a' - 13)) && (*sCurs <= 'm')) ||
		((*sCurs >= ('A' - 13)) && (*sCurs <= 'M')))
		{
			*sCurs += 13;
		}
	}
	return (s);
}
